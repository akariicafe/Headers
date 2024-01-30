@class HKInteractiveChartAnnotationView, NSArray, UIView, NSMutableArray, NSDate;
@protocol HKLollipopDelegate;

@interface HKLollipopController : NSObject

@property (retain, nonatomic) UIView *parentView;
@property (retain, nonatomic) UIView *fieldView;
@property (retain, nonatomic) NSMutableArray *extensionViews;
@property (copy, nonatomic) NSArray *lastSelectionLocation;
@property (retain, nonatomic) NSDate *lastFirstLollipopDate;
@property (nonatomic) BOOL noAnimationVisibility;
@property (readonly, nonatomic) HKInteractiveChartAnnotationView *annotationView;
@property (readonly, weak, nonatomic) id<HKLollipopDelegate> delegate;
@property (nonatomic) BOOL centerLollipopVertically;

+ (BOOL)pointSelectionContextsHaveUserInfo:(id)a0;

- (void)_setAlpha:(double)a0;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (void)_setHidden:(BOOL)a0;
- (void)setInvisibleAnimated:(BOOL)a0;
- (id)_lollipopExtensionColor;
- (BOOL)_selectionHasMoved:(id)a0;
- (id)_stickLocationsFromPointContexts:(id)a0;
- (void)_positionAnnotationViewWithStickLocations:(id)a0;
- (void)_rebuildExtensionsWithStickLocations:(id)a0;
- (void)_setExtensionViewBackgrounds;
- (double)_lollipopExtensionLength;
- (double)_lollipopExtensionWidth;
- (id)_lollipopFieldColor;
- (id)_lollipopAnnotationColor;
- (void)updateWithPointContexts:(id)a0;
- (void)_bringViewsToFront;
- (id)initWithAnnotationDataSource:(id)a0 parentView:(id)a1 delegate:(id)a2;
- (void)setVisibleWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pointContexts:(id)a1 animated:(BOOL)a2;
- (id)firstLollipopDate;

@end
