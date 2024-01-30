@class NSMutableArray, UIStackView;

@interface WFRowOfIconsView : UIView

@property (readonly, nonatomic) unsigned long long maxNumberOfIcons;
@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) NSMutableArray *iconViews;
@property (readonly, nonatomic) double height;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)setIcons:(id)a0;
- (id)initWithMaxNumberOfIcons:(unsigned long long)a0 height:(double)a1;
- (void)setHomeIcons:(id)a0;
- (void)rebuildSubviewsForItems:(id)a0;

@end
