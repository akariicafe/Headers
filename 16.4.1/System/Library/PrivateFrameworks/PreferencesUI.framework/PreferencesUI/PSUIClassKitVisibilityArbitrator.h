@class CLSSettingsVisibilityController;

@interface PSUIClassKitVisibilityArbitrator : NSObject

@property (nonatomic) unsigned long long visibilityState;
@property (retain, nonatomic) CLSSettingsVisibilityController *visibilityController;
@property (copy, nonatomic) id /* block */ visibilityStateChangeHandler;

- (void)settingsVisibilityDidChange:(id)a0;
- (void)reloadVisibilityState;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
