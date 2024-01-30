@class UIColor, NSString, NSURL, UIViewController;
@protocol SBUISystemApertureElement;

@interface ChronoCore.SystemApertureElementViewController : UIViewController <SBUISystemApertureElement, SBUISystemApertureElementProviding, BSInvalidatable> {
    void /* unknown type, empty encoding */ associatedScenePersistenceIdentifier;
    void /* unknown type, empty encoding */ associatedAppBundleIdentifier;
    void /* unknown type, empty encoding */ elementIdentifier;
    void /* unknown type, empty encoding */ expandedUIHostingController;
    void /* unknown type, empty encoding */ leadingUIHostingController;
    void /* unknown type, empty encoding */ trailingUIHostingController;
    void /* unknown type, empty encoding */ minimalUIHostingController;
    void /* unknown type, empty encoding */ _cancellables;
    void /* unknown type, empty encoding */ _logger;
    void /* unknown type, empty encoding */ _logIdentifier;
    void /* unknown type, empty encoding */ _scene;
}

@property (nonatomic) void /* unknown type, empty encoding */ activeLayoutMode;
@property (nonatomic) void /* unknown type, empty encoding */ contentRole;
@property (nonatomic) void /* unknown type, empty encoding */ preferredLayoutMode;
@property (nonatomic) void /* unknown type, empty encoding */ maximumLayoutMode;
@property (nonatomic, copy) NSString *associatedScenePersistenceIdentifier;
@property (nonatomic, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, copy) NSString *elementIdentifier;
@property (nonatomic) void /* unknown type, empty encoding */ attachedMinimalViewRequiresZeroPadding;
@property (nonatomic, retain) void /* unknown type, empty encoding */ leadingView;
@property (nonatomic, retain) void /* unknown type, empty encoding */ trailingView;
@property (nonatomic, retain) void /* unknown type, empty encoding */ minimalView;
@property (nonatomic) void /* unknown type, empty encoding */ presentationBehaviors;
@property (nonatomic, readonly) NSURL *launchURL;
@property (nonatomic, readonly) UIColor *keyColor;
@property (nonatomic, readonly) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;

- (id)_timelinesForDateInterval:(id)a0;
- (void)_updateWithFrameSpecifier:(id)a0 completion:(id /* block */)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)traitCollectionDidChange:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviewsWithTransitionCoordinator:(id)a0;

@end
