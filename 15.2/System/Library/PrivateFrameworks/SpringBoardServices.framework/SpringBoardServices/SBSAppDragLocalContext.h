@class NSString, NSSet, NSArray, NSURL, NSUserActivity, UIView;

@interface SBSAppDragLocalContext : NSObject

@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, copy, nonatomic) NSSet *launchActions;
@property (readonly, nonatomic) long long startLocation;
@property (copy, nonatomic) NSSet *containedIconIdentifiers;
@property (copy, nonatomic) NSString *activeCustomIconDataSourceUniqueIdentifier;
@property (copy, nonatomic) NSArray *customIconDataSourceConfigurations;
@property (nonatomic) unsigned long long gridSizeClass;
@property (copy, nonatomic) NSString *draggedSceneIdentifier;
@property (copy, nonatomic) NSURL *launchURL;
@property (retain, nonatomic) NSUserActivity *userActivity;
@property (retain, nonatomic) UIView *portaledPreview;
@property (nonatomic) BOOL cancelsViaScaleAndFade;
@property (nonatomic, getter=isSourceLocal) BOOL sourceLocal;
@property (copy, nonatomic) NSString *droppedIconIdentifier;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithApplicationBundleIdentifier:(id)a0 withLaunchActions:(id)a1 startLocation:(long long)a2;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
