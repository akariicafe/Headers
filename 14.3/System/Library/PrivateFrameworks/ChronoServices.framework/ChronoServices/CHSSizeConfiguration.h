@interface CHSSizeConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGSize { double width; double height; } smallSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } mediumSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } largeSize;

- (id)initWithSmallSize:(struct CGSize { double x0; double x1; })a0 mediumSize:(struct CGSize { double x0; double x1; })a1 largeSize:(struct CGSize { double x0; double x1; })a2;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
