@class STSResultDetailView, STSAnimatedImageInfo, NSURL, UIImage, NSString;
@protocol STSResultDetailViewControllerDelegate;

@interface STSResultDetailViewController : UIViewController <STSResultDetailViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) STSResultDetailView *view;
@property (weak, nonatomic) id<STSResultDetailViewControllerDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) NSURL *contentURL;
@property (readonly, nonatomic) UIImage *thumbnail;
@property (readonly, nonatomic) STSAnimatedImageInfo *thumbnailInfo;
@property (nonatomic) struct CGSize { double x0; double x1; } providerIconSize;
@property (retain, nonatomic) UIImage *providerIcon;
@property (copy, nonatomic) NSString *providerName;
@property (retain, nonatomic) NSURL *providerURL;
@property (nonatomic) BOOL isFullscreen;
@property (retain, nonatomic) NSString *queryString;
@property (nonatomic) BOOL useBackgroundBlur;
@property unsigned long long queryId;
@property (nonatomic) BOOL allowCustomContentViewInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)prefersStatusBarHidden;
- (void)_handleTap:(id)a0;
- (id)detailView;
- (void)loadView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)updateWithThumbnail:(id)a0 orThumbnailInfo:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 traitCollection:(id)a1;
- (void)detailViewDidTapProvider:(id)a0;
- (void)detailViewDidTapSend:(id)a0;
- (void)updateCustomContentWithView:(id)a0;

@end
