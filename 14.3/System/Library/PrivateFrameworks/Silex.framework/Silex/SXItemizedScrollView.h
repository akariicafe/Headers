@class NSArray, NSIndexSet, NSMutableDictionary, UIView, NSString;
@protocol SXItemizedScrollViewDataSource;

@interface SXItemizedScrollView : UIScrollView <UIScrollViewDelegate>

@property (nonatomic) struct CGSize { double width; double height; } framesAreValidForSize;
@property (retain, nonatomic) NSArray *frames;
@property (retain, nonatomic) NSIndexSet *visibleIndices;
@property (nonatomic) BOOL contentTooSmall;
@property (nonatomic) BOOL gotActiveViewIndexChange;
@property (retain, nonatomic) NSMutableDictionary *visibleViewsByIndex;
@property (weak, nonatomic) id<SXItemizedScrollViewDataSource> dataSource;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } visibleRange;
@property (readonly, nonatomic) unsigned long long activeViewIndex;
@property (readonly, nonatomic) UIView *activeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollToPrevious;
- (void)scrollToNext;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setActiveViewIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForViewAtIndex:(unsigned long long)a0;
- (void)reindexate;
- (void)forceCorrectFrames;
- (void)determineNewVisibilityRange;
- (void)viewManagementForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)rebuildFramesArray;

@end
