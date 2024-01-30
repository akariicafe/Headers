@class NSObject, NSMutableArray, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NWActivityXPC : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned int qosClass;
@property (retain, nonatomic) NSMutableArray *pendingCompletionHandlers;

- (void)cancel;
- (void)dealloc;
- (void)start;
- (id)description;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 qosClass:(unsigned int)a1;
- (void)retrieveMetricsForActivity:(unsigned char[16])a0 completion:(id /* block */)a1;

@end
