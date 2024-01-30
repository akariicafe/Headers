@class NSMutableDictionary, NSObject;
@protocol BBSectionAuthorizationManagerDelegate, OS_dispatch_queue;

@interface BBSectionAuthorizationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_sectionIDsToAuthorizationExpiryTimers;
}

@property (weak, nonatomic) id<BBSectionAuthorizationManagerDelegate> delegate;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_replaceExisitingTimerForSectionID:(id)a0 withExpirationDate:(id)a1;
- (void)_addNewTimerForSectionID:(id)a0 withExpirationDate:(id)a1;
- (void)_cancelExisitingTimerForSectionID:(id)a0;
- (void)_queue_triggerDidFireForExpiryTimer:(id)a0;
- (id)handleChangeForSectionInfo:(id)a0 replacingSectionInfo:(id)a1;

@end
