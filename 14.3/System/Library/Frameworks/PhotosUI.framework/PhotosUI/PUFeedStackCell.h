@class PUStackView;

@interface PUFeedStackCell : PUFeedCell

@property (retain, nonatomic) PUStackView *stackView;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } stackOffset;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
