@class NSTimer, NSExtension, NSMutableDictionary;

@interface HFCHIPExtension : NSObject

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) NSMutableDictionary *futureMap;
@property (retain, nonatomic) NSTimer *timeoutWorker;

- (id)initWithExtension:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_finishRequest:(id)a0 withError:(id)a1;
- (void)_finishRequest:(id)a0 withResult:(id)a1;
- (void)_flushTimeoutRequests;
- (id)pairIdentifier:(id)a0 home:(id)a1;
- (id)listRoomsForHome:(id)a0;

@end
