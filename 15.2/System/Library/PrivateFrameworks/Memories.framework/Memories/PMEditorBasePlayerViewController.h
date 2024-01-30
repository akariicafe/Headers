@class NSLayoutConstraint, UIView;
@protocol PMEditorToolbarOwner, PMEditorPlayerViewDelegate;

@interface PMEditorBasePlayerViewController : UIViewController

@property (retain, nonatomic) UIView *snapshotView;
@property (retain, nonatomic) NSLayoutConstraint *playerContainerHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *playerContainerWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *tableHeaderHeightConstraint;
@property (weak, nonatomic) id<PMEditorPlayerViewDelegate> playerViewDelegate;
@property (weak, nonatomic) id<PMEditorToolbarOwner> toolbarOwner;
@property (retain, nonatomic) UIView *playerContainerView;
@property (retain, nonatomic) UIView *tableHeaderWithSpaceView;

- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (double)heightForPlayerView;

@end
