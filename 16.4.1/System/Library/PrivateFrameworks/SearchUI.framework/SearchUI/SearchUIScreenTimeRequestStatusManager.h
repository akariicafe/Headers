@class NSMutableDictionary, BPSSink, NSNotificationCenter;

@interface SearchUIScreenTimeRequestStatusManager : NSObject

@property (class, readonly, nonatomic) SearchUIScreenTimeRequestStatusManager *sharedManager;

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
