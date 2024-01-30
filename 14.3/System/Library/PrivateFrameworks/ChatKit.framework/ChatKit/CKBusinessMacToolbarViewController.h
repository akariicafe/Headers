@class CKBusinessMacToolbarView, IMHandle, CKConversation, UIView;

@interface CKBusinessMacToolbarViewController : UIViewController

@property (readonly, nonatomic) CKConversation *conversation;
@property (readonly, nonatomic) IMHandle *handle;
@property (readonly, nonatomic) BOOL showingInStandAloneWindow;
@property (retain, nonatomic) CKBusinessMacToolbarView *toolbarView;
@property (retain, nonatomic) UIView *detailsPopoverPresentationSourceView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_detailsPopoverFrame;
- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithConversation:(id)a0 showingInStandAloneWindow:(BOOL)a1;
- (void)_handleAddressBookPartialChange:(id)a0;
- (void)_updateBannerImageData;
- (void)_updateFallbackTitle;
- (void)_updateBrandColors;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
