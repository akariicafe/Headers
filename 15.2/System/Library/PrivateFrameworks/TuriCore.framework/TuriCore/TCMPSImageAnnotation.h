@interface TCMPSImageAnnotation : NSObject <NSCopying>

@property (nonatomic) long long identifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (nonatomic) double confidence;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
