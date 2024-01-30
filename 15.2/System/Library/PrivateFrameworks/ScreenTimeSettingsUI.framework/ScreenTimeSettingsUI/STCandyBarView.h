@class NSArray;

@interface STCandyBarView : UIView

@property (readonly) BOOL useVibrancy;
@property (copy, nonatomic) NSArray *viewItems;
@property (copy, nonatomic) NSArray *usageItems;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateSectionViewImages;
- (id)capImageWithHeight:(double)a0 leadingLineCap:(int)a1 trailingLineCap:(int)a2;
- (id)initWithVibrancy:(BOOL)a0;
- (void)setUsageItems:(id)a0 animated:(BOOL)a1;

@end
