@class FBSDisplayIdentity, NSString, SBSceneManager, NSMutableSet;
@protocol SBSceneManagerReferenceDelegate;

@interface SBSceneManagerReference : NSObject <BSDebugDescriptionProviding> {
    id<SBSceneManagerReferenceDelegate> _delegate;
    SBSceneManager *_manager;
    SBSceneManager *_weak_manager;
    BOOL _managerWasValid;
    BOOL _displayIsConnected;
    NSMutableSet *_retainingScenes;
    BOOL _invalidated;
}

@property (retain, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDisplayIdentity:(id)a0;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_updateRetainWithBlock:(id /* block */)a0;
- (id)succinctDescription;
- (BOOL)isDefunct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (void)setDisplayIsConnected:(BOOL)a0;
- (id)succinctDescriptionBuilder;
- (void)setManager:(id)a0;
- (void)_autoreleaseManager:(id)a0;
- (void)setDelegate:(id)a0;
- (BOOL)isRetaining;
- (id)manager;
- (void)retainForScene:(id)a0;
- (void)releaseForScene:(id)a0;
- (void)invalidate;
- (id)delegate;

@end
