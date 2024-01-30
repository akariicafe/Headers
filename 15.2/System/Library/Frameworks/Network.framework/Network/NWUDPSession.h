@class NSString, NWPath, NWDatagramConnection, NWEndpoint, NWParameters;

@interface NWUDPSession : NSObject

@property (retain) NWDatagramConnection *connection;
@property unsigned long long maxReadDatagrams;
@property (copy) id /* block */ readHandler;
@property (retain, nonatomic) NWEndpoint *resolvedEndpoint;
@property (retain, nonatomic) NWPath *currentPath;
@property (nonatomic, getter=isViable) BOOL viable;
@property (nonatomic) BOOL hasBetterPath;
@property (nonatomic) long long state;
@property unsigned long long internalMTU;
@property (readonly) NWParameters *parameters;
@property (readonly, nonatomic) NSString *localPort;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (readonly) NWEndpoint *endpoint;
@property (readonly, nonatomic) unsigned long long maximumDatagramLength;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (id)initWithConnection:(id)a0;
- (id)initWithEndpoint:(id)a0 parameters:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)cancel;
- (void)setupEventHandler;
- (id)initWithUpgradeForSession:(id)a0;
- (void)tryNextResolvedEndpoint;
- (void)readInternal;
- (void)setReadHandler:(id /* block */)a0 maxDatagrams:(unsigned long long)a1;
- (void)writeMultipleDatagrams:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeDatagram:(id)a0 completionHandler:(id /* block */)a1;

@end
