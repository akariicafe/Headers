@class CLSSettingsVisibilityController;

@interface PSUIClassKitVisibilityArbitrator : NSObject

@property (nonatomic) unsigned long long visibilityState;
@property (retain, nonatomic) CLSSettingsVisibilityController *visibilityController;
@property (copy, nonatomic) id /* block */ visibilityStateChangeHandler;

- (void)settingsVisibilityDidChange:(id)a0;
- (void).cxx_destruct;
- (void)reloadVisibilityState;
- (id)init;
- (void)dealloc;

@end
