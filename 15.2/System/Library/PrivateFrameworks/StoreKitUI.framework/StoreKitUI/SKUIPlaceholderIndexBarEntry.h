@interface SKUIPlaceholderIndexBarEntry : SKUIIndexBarEntry

@property (readonly, nonatomic) struct CGSize { double width; double height; } placeholderSize;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithPlaceholderSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_calculatedContentSize;

@end
