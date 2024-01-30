@class CLSSettingsVisibilityController;

@interface PSUIClassKitVisibilityArbitrator : NSObject

@property (nonatomic) unsigned long long visibilityState;
@property (retain, nonatomic) CLSSettingsVisibilityController *visibilityController;
@property (copy, nonatomic) id /* block */ visibilityStateChangeHandler;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)settingsVisibilityDidChange:(id)a0;
- (void)reloadVisibilityState;

@end
