@class UIListContentView, NSString, UIImageView, NSArray, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface HUGridSectionHeaderView : UICollectionViewListCell <UIGestureRecognizerDelegate>

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) UIListContentView *listContentView;
@property (retain, nonatomic) UIImageView *chevronView;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic) BOOL showsDisclosureIndicator;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_didRecognizeTapGesture:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)dealloc;
- (void)updateConstraints;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)setContentConfiguration:(id)a0;
- (void)_didRecognizeLongPressGesture:(id)a0;
- (void)_installGestureRecognizers;
- (void)_uninstallGestureRecognizers;

@end
