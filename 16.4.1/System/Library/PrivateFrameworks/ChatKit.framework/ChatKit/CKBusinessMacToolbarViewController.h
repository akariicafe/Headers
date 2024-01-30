@class CKBusinessMacToolbarView, IMHandle, CKConversation, UIView;

@interface CKBusinessMacToolbarViewController : UIViewController

@property (readonly, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) IMHandle *handle;
@property (readonly, nonatomic) BOOL showingInStandAloneWindow;
@property (retain, nonatomic) CKBusinessMacToolbarView *toolbarView;
@property (retain, nonatomic) UIView *detailsPopoverPresentationSourceView;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_detailsPopoverFrame;
- (void)_handleAddressBookPartialChange:(id)a0;
- (void)_updateBannerImageData;
- (void)_updateBrandColors;
- (void)_updateFallbackTitle;
- (id)initWithConversation:(id)a0 showingInStandAloneWindow:(BOOL)a1;

@end
