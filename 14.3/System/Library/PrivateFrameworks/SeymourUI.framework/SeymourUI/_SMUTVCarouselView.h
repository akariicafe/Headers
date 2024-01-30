@class NSArray, UIView;
@protocol SMUTVCarouselViewDelegate, SMUTVCarouselViewDataSource;

@interface _SMUTVCarouselView : _TVCarouselView <SMUTVCarouselView>

@property (weak, nonatomic) id<SMUTVCarouselViewDataSource> dataSource;
@property (weak, nonatomic) id<SMUTVCarouselViewDelegate> delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGSize { double x0; double x1; } itemSize;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double autoscrollInterval;
@property (nonatomic) double unitScrollDuration;
@property (readonly, copy, nonatomic) NSArray *visibleCells;
@property (nonatomic) struct CGPoint { double x0; double x1; } focusDirection;
@property (retain, nonatomic) UIView *headerView;
@property (readonly, nonatomic) double showcaseFactor;
@property (nonatomic) BOOL shouldScaleOnIdleFocus;
@property (nonatomic) BOOL showsPageControl;
@property (nonatomic) double pageControlMargin;
@property (nonatomic) unsigned long long scrollMode;


@end
