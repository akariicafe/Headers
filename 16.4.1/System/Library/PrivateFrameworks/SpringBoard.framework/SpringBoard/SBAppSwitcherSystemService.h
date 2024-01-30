@class NSString, FBServiceClientAuthenticator, SBRecentAppLayouts, SBCommandTabController;

@interface SBAppSwitcherSystemService : NSObject <SBSystemServiceServerAppSwitcherDelegate> {
    FBServiceClientAuthenticator *_requestAppearanceForHiddenAppAuthenticator;
    SBRecentAppLayouts *_recentAppLayouts;
    SBCommandTabController *_commandTabController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
