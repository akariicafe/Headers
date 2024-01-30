@class NWEndpoint, NWPathEvaluator, NSURL, NSArray, NSUUID, NSString, NWInterface, NWParameters, NWNetworkDescription;

@interface NWMonitor : NSObject <NSURLSessionTaskDelegate>

@property long long status;
@property (retain) NWNetworkDescription *bestAvailableNetworkDescription;
@property (retain) NSArray *networkDescriptionArray;
@property (retain) NWParameters *parameters;
@property (retain) NWEndpoint *endpoint;
@property (retain) NWPathEvaluator *pathEvaluator;
@property (retain) NSUUID *lastProbeUUID;
@property (retain) NSURL *lastProbeURL;
@property (retain) NWInterface *interface;
@property unsigned int mID;
@property (readonly, nonatomic) NSString *privateDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)mainOperationQueue;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)monitorWithNetworkDescriptionArray:(id)a0 endpoint:(id)a1 parameters:(id)a2;
+ (id)copySavedMonitorForNetworkDescriptionArray:(id)a0 endpoint:(id)a1 parameters:(id)a2;
+ (void)saveMonitor:(id)a0;
+ (id)queue;
+ (id)monitorWithNetworkDescription:(id)a0 endpoint:(id)a1 parameters:(id)a2;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (void)dealloc;
- (BOOL)matchesNetworkDescriptionArray:(id)a0 endpoint:(id)a1 parameters:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)evaluateStartingAtIndex:(unsigned long long)a0 probeUUID:(id)a1 probeWasSuccessful:(BOOL)a2;

@end
