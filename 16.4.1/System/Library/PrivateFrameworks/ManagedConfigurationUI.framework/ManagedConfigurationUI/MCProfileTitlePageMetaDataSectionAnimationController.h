@class NSString, MCProfileTitlePageMetaDataSectionController, UIView, UITableView;

@interface MCProfileTitlePageMetaDataSectionAnimationController : NSObject <MCUIScrollAnimationResponder>

@property (weak, nonatomic) MCProfileTitlePageMetaDataSectionController *sectionController;
@property (weak, nonatomic) UIView *iconView;
@property (weak, nonatomic) UIView *titleView;
@property (weak, nonatomic) UIView *subtitleView;
@property (weak, nonatomic) UIView *orgView;
@property (weak, nonatomic) UIView *topBar;
@property (weak, nonatomic) UITableView *tableView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } iconViewOriginFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleLabelOriginFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)_alphaWithProgress:(double)a0 keys:(id)a1 values:(id)a2;
- (void)_animateView:(id)a0 progress:(double)a1 startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 endY:(double)a3 endScale:(double)a4 extraYOffset:(double)a5;
- (unsigned long long)_binarySearch:(id)a0 target:(double)a1;
- (BOOL)_putBackViewIfNeeded:(id)a0 toView:(id)a1;
- (BOOL)_relocateViewIfNeeded:(id)a0 fromView:(id)a1 toView:(id)a2;
- (void)startTrackingWithMetaDataSectionController:(id)a0 topBar:(id)a1;
- (void)updateProgressWithTranslationDistance:(double)a0 referenceDistance:(double)a1 isScrolling:(BOOL)a2;

@end
