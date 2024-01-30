@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPrivacyManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privacyManagerQueue;
@property (retain, nonatomic) NSMutableSet *operations;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)_resetPrivacySettingsForAppContainerAccountTuple:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetPrivacySettingsWithCompletionHandler:(id /* block */)a0;

@end
