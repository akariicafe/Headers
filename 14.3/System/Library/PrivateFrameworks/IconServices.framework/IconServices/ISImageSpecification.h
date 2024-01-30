@interface ISImageSpecification : NSObject

@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) double scale;
@property (readonly) ISImageSpecification *smallerSpecification;
@property (readonly) ISImageSpecification *largerSpecification;

- (void).cxx_destruct;
- (void)setLargerSpecification:(id)a0;
- (void)setSmallerSpecification:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
