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

- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)manager;
- (void)setDisplayIsConnected:(BOOL)a0;
- (void)_autoreleaseManager:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)setManager:(id)a0;
- (void)releaseForScene:(id)a0;
- (id)succinctDescription;
- (void)setDelegate:(id)a0;
- (BOOL)isDefunct;
- (void).cxx_destruct;
- (void)retainForScene:(id)a0;
- (id)delegate;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_updateRetainWithBlock:(id /* block */)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (id)initWithDisplayIdentity:(id)a0;
- (BOOL)isRetaining;

@end
