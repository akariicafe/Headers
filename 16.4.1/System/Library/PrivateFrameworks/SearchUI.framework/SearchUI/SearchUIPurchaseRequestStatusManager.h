@class NSMutableDictionary, BPSSink, NSNotificationCenter;

@interface SearchUIPurchaseRequestStatusManager : NSObject

@property (class, readonly, nonatomic) SearchUIPurchaseRequestStatusManager *sharedManager;

@property (retain, nonatomic) BPSSink *biomeSink;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSMutableDictionary *requestStatuses;

- (void)updateWithEvent:(id)a0;
- (id)addObserver:(id /* block */)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (int)statusForRequestID:(id)a0;
- (void)setupSink;

@end
