@class NSString, NSSet, NSURL, NSUserActivity, UIView;

@interface SBSAppDragLocalContext : NSObject

@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, copy, nonatomic) NSSet *launchActions;
@property (readonly, nonatomic) long long startLocation;
@property (copy, nonatomic) NSString *draggedSceneIdentifier;
@property (copy, nonatomic) NSURL *launchURL;
@property (retain, nonatomic) NSUserActivity *userActivity;
@property (retain, nonatomic) UIView *portaledPreview;
@property (nonatomic) BOOL cancelsViaScaleAndFade;
@property (nonatomic, getter=isSourceLocal) BOOL sourceLocal;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (id)succinctDescriptionBuilder;
- (id)initWithApplicationBundleIdentifier:(id)a0 withLaunchActions:(id)a1 startLocation:(long long)a2;

@end
