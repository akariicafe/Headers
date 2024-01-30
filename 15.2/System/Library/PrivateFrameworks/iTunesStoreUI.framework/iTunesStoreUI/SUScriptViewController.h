@class SUScriptSplitViewController, NSString, NSArray, SUScriptNavigationController, SUScriptPopOver, SUScriptSection, UIViewController, SUScriptNavigationItem;

@interface SUScriptViewController : SUScriptObject {
    NSArray *_scriptToolbarItems;
}

@property (readonly) SUScriptViewController *volumeViewController;
@property (retain, nonatomic) UIViewController *nativeViewController;
@property (retain) id backgroundColor;
@property (readonly) NSString *contextDictionary;
@property (retain) SUScriptViewController *inputAccessoryViewController;
@property (retain) NSString *modalPresentationStyle;
@property (readonly) SUScriptViewController *modalViewController;
@property (readonly) SUScriptNavigationController *navigationController;
@property (readonly) SUScriptNavigationItem *navigationItem;
@property (readonly) SUScriptPopOver *popOver;
@property (readonly) SUScriptViewController *presentingViewController;
@property (retain) SUScriptSection *section;
@property id showsLibraryButton;
@property (readonly) SUScriptSplitViewController *splitViewController;
@property (copy) id toolbarItems;
@property (retain) id topBackgroundColor;
@property (retain) SUScriptViewController *transientViewController;
@property id usesBlurredBackground;
@property id wantsFullScreenLayout;
@property (readonly) NSString *modalPresentationStyleNameFormSheet;
@property (readonly) NSString *modalPresentationStyleNameFullScreen;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)_className;
- (void)presentModalViewController:(id)a0 withTransition:(id)a1;
- (void)dismissModalViewControllerWithTransition:(id)a0;
- (BOOL)equals:(id)a0;
- (id)attributeKeys;
- (void)setToolbarItems:(id)a0 animated:(BOOL)a1;
- (void)dismissModalViewControllerAnimated:(BOOL)a0;
- (void)dealloc;
- (id)scriptAttributeKeys;
- (void)runScrollTest:(id)a0 withDelta:(float)a1 forIterations:(int)a2;
- (void)tearDownUserInterface;
- (id)newNativeViewController;
- (void)_dismissModalViewControllerAnimated:(BOOL)a0;
- (void)_dismissModalViewControllerWithTransition:(id)a0;
- (void)_presentModalViewController:(id)a0 withTransition:(id)a1;
- (id)newScriptColorWithValue:(id)a0;
- (int)_transitionForString:(id)a0;
- (void)addPassbookPassWithURL:(id)a0;
- (void)dismissVolumeViewControllerAnimated:(id)a0;
- (void)presentVolumeViewController:(id)a0 animated:(id)a1;
- (id)_parentViewControllerForVolumeViewController;

@end
