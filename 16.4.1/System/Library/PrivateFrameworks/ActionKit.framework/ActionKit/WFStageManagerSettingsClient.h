@class WFSettingsClient, NSError;

@interface WFStageManagerSettingsClient : WFSettingsClient <WFBooleanStateSetting> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_manager;
}

@property (nonatomic) BOOL showRecentApps;
@property (nonatomic) BOOL showDock;

+ (void)createClientWithCompletionHandler:(void (^)(WFSettingsClient *, NSError *))a0;

- (void)getStateWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
- (void)setState:(BOOL)a0 completionHandler:(void (^)(NSError *))a1;
- (id)init;
- (void).cxx_destruct;

@end
