@class NSString, NSArray, WFDragGestureRecognizer, WFActionDrawerImage, WFDragController, WFActionDrawerImageLoadTask, UIViewController, WFCircularImageView, UILabel;
@protocol VCActionDonation;

@interface WFActionDrawerSiriSuggestionsCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, WFDraggableActionView>

@property (weak, nonatomic) WFCircularImageView *imageView;
@property (retain, nonatomic) WFActionDrawerImage *image;
@property (retain, nonatomic) WFActionDrawerImageLoadTask *imageLoadTask;
@property (weak, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *verticalStackConstraints;
@property (retain, nonatomic) NSArray *horizontalStackConstraints;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long cellType;
@property (readonly, nonatomic) id<VCActionDonation> donation;
@property (weak, nonatomic) WFDragGestureRecognizer *dragRecognizer;
@property (readonly, nonatomic) WFDragController *dragController;
@property (weak, nonatomic) UIViewController *containingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldStackVerticallyForTraitCollection:(id)a0;
+ (struct CGSize { double x0; double x1; })preferredSizeForType:(long long)a0 forTraitCollection:(id)a1;
+ (struct CGSize { double x0; double x1; })sizeForCellUsingVerticalStacking:(BOOL)a0;
+ (double)spacingForType:(long long)a0;

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setImage:(id)a0 animated:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })initialSizeForBeginningDragController:(id)a0;
- (void)setUpLayoutConstraints;
- (void)adjustStackingStyle;
- (void)configureWithCellType:(long long)a0 title:(id)a1 donation:(id)a2 genericAction:(id)a3 forDailyRoutines:(BOOL)a4;
- (void)loadImageForInteractionDonation:(id)a0;
- (BOOL)shouldStackVerticallyForTraitCollection:(id)a0;

@end
