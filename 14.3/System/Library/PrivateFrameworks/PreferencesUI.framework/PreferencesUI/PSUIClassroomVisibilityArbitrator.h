@protocol CRKSettingsUIVisibilityProvider;

@interface PSUIClassroomVisibilityArbitrator : NSObject

@property (retain, nonatomic) id<CRKSettingsUIVisibilityProvider> visibilityProvider;
@property (nonatomic) unsigned long long visibilityState;
@property (copy, nonatomic) id /* block */ visibilityStateChangeHandler;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)connectToDaemon;
- (void)reloadVisibilityState;

@end
