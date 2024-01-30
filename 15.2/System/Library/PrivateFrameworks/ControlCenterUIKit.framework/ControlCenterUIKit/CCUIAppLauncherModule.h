@class NSBundle, NSString, SBFApplication, NSURL, UIImage, CCUIContentModuleContext, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@interface CCUIAppLauncherModule : NSObject <CCUIContentModule> {
    NSBundle *_bundle;
    SBFApplication *_application;
}

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *launchApplicationIdentifier;
@property (copy, nonatomic) NSURL *launchURL;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) BOOL supportsApplicationShortcuts;
@property (readonly, nonatomic, getter=_application) SBFApplication *application;
@property (readonly, copy, nonatomic) UIImage *iconGlyph;
@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleTouchDownWithTouchType:(long long)a0;
- (id)contentViewControllerForContext:(id)a0;
- (void)_fetchApplicationIfNeeded;
- (id)launchURLForTouchType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)handleTapWithTouchType:(long long)a0;

@end
