@class NSString, TPKContent, TPKContentView;

@interface TPKTipContentCollectionHeaderView : UICollectionReusableView

@property (nonatomic) struct CGSize { double width; double height; } systemLayoutSizeCacheSize;
@property (retain, nonatomic) NSString *systemLayoutSizeCacheKey;
@property (retain, nonatomic) TPKContent *content;
@property (retain, nonatomic) TPKContentView *tipContentView;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContent:(id)a0 contentController:(id)a1;

@end
