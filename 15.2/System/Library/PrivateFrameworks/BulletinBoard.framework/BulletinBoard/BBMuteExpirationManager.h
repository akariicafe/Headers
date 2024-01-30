@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, BBMuteExpirationManagerDelegate;

@interface BBMuteExpirationManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *timersBySectionID;
@property (weak, nonatomic) id<BBMuteExpirationManagerDelegate> delegate;

- (id)initWithQueue:(id)a0;
- (void)stopWatchingExpirationsForSectionID:(id)a0;
- (BOOL)cleanAndWatchExpirationsForSectionInfo:(id)a0;
- (void).cxx_destruct;
- (id)scheduledExpirationDateForSectionID:(id)a0;
- (void)_cancelTimerForSectionID:(id)a0;
- (void)dealloc;
- (void)_queue_triggerDidFireForExpiryTimer:(id)a0;

@end
