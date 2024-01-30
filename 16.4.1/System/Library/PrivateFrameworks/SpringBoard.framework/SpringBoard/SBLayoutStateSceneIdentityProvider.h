@class NSString, FBSDisplayIdentity;
@protocol SBLayoutStateSceneIdentityProviderDataSource;

@interface SBLayoutStateSceneIdentityProvider : NSObject <SBApplicationSceneIdentityProviding> {
    FBSDisplayIdentity *_displayIdentity;
}

@property (weak, nonatomic) id<SBLayoutStateSceneIdentityProviderDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sceneIdentityForApplication:(id)a0 targetContentIdentifier:(id)a1;
- (id)sceneIdentityForApplication:(id)a0 uniqueIdentifier:(id)a1 targetContentIdentifier:(id)a2;
- (id)sceneIdentityForApplication:(id)a0 uniqueIdentifier:(id)a1;
- (id)newSceneIdentityForApplication:(id)a0;
- (id)sceneIdentityForApplication:(id)a0 uniqueIdentifier:(id)a1 targetContentIdentifier:(id)a2 sceneSessionRole:(id)a3;
- (id)sceneIdentityForApplication:(id)a0 targetContentIdentifier:(id)a1 allowCanMatches:(BOOL)a2 preferNewScene:(BOOL)a3 visibleIdentifiers:(id)a4;
- (id)sceneIdentityForApplication:(id)a0 excludingIdentifiers:(id)a1;
- (id)sceneIdentityForApplication:(id)a0;
- (id)sceneIdentityForApplication:(id)a0 createPrimaryIfRequired:(BOOL)a1 sceneSessionRole:(id)a2;
- (id)initWithDisplayIdentity:(id)a0;
- (id)_sceneIdentityForApplication:(id)a0 uniqueIdentifier:(id)a1 targetContentIdentifier:(id)a2 allowCanMatches:(BOOL)a3 preferNewScene:(BOOL)a4 allowSceneCreation:(BOOL)a5 visibleIdentifiers:(id)a6 excludingIdentifiers:(id)a7 sceneSessionRole:(id)a8 preferredDisplay:(id)a9;
- (id)sceneIdentityForApplication:(id)a0 targetContentIdentifier:(id)a1 allowCanMatches:(BOOL)a2 preferNewScene:(BOOL)a3 allowSceneCreation:(BOOL)a4 visibleIdentifiers:(id)a5 preferredDisplay:(id)a6;
- (id)_identifierForApplication:(id)a0;
- (void).cxx_destruct;

@end
