@class HACCShortcutViewController, HearingAidUIServer, NSString;

@interface AXHearingAidDisplayController : UIViewController <AXHAShortcutUpdateProtocol>

@property (retain, nonatomic) HACCShortcutViewController *moduleUIController;
@property (nonatomic) HearingAidUIServer *parentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)shortcutDidChangeSize:(id)a0;

@end
