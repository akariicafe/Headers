@class NSMutableDictionary, NSUserDefaults, NSObject;
@protocol OS_dispatch_queue;

@interface CKTapToRadarManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *alertQueue;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSMutableDictionary *lastPromptDateByMessageHash;

+ (id)sharedManager;

- (id)init;
- (id)initInternal;
- (void).cxx_destruct;
- (id)_hashForMessage:(id)a0;
- (id)_lastPromptDateForMessage:(id)a0;
- (void)_launchTTRWithRequest:(id)a0;
- (void)_lockedTriggerTapToRadarWithRequest:(id)a0;
- (void)_notePromptAttemptForMessage:(id)a0;
- (void)triggerTapToRadarWithRequest:(id)a0;

@end
