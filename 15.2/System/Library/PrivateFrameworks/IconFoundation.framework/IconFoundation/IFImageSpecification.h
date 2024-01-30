@class NSSet;

@interface IFImageSpecification : NSObject

@property (retain, nonatomic) IFImageSpecification *smallerSpecification;
@property (retain, nonatomic) IFImageSpecification *largerSpecification;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) double scale;
@property (readonly) struct CGSize { double width; double height; } pixelsSize;
@property (readonly) NSSet *tags;

- (struct CGSize { double x0; double x1; })pixelSize;
- (double)dimension;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 tags:(id)a2;
- (BOOL)isEqualToImageSpecification:(id)a0;
- (struct CGSize { double x0; double x1; })minimumSize;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
