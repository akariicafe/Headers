@class NSString, TPKContent, TPKContentView;

@interface TPKTipContentTableViewCell : UITableViewCell

@property (nonatomic) struct CGSize { double width; double height; } systemLayoutSizeCacheSize;
@property (retain, nonatomic) NSString *systemLayoutSizeCacheKey;
@property (retain, nonatomic) TPKContent *content;
@property (retain, nonatomic) TPKContentView *tipContentView;

+ (id)reuseIdentifier;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setContent:(id)a0 contentController:(id)a1;

@end
