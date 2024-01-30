@interface SKUIPlaceholderIndexBarEntry : SKUIIndexBarEntry

@property (readonly, nonatomic) struct CGSize { double width; double height; } placeholderSize;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (struct CGSize { double x0; double x1; })_calculatedContentSize;
- (id)initWithPlaceholderSize:(struct CGSize { double x0; double x1; })a0;

@end
