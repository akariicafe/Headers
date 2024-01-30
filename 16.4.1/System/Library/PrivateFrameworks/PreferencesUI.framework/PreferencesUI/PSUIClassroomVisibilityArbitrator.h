@class NSString;
@protocol CRKSettingsUIVisibilityProvider;

@interface PSUIClassroomVisibilityArbitrator : NSObject

@property (retain, nonatomic) id<CRKSettingsUIVisibilityProvider> visibilityProvider;
@property (nonatomic) unsigned long long visibilityState;
@property (copy, nonatomic) NSString *paneStatus;
@property (copy, nonatomic) id /* block */ visibilityStateChangeHandler;
@property (copy, nonatomic) id /* block */ paneStatusChangeHandler;

+ (id)visibilityProviderKeyPaths;

- (void)connectToDaemon;
- (void)reloadVisibilityState;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)updatePaneStatus;
- (void)stopObservingVisibilityProvider;
- (void)startObservingVisibilityProvider;

@end
