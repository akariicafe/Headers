@class NSString;

@interface AXMDisplay : NSObject <NSCopying>

@property (nonatomic) long long backingType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double orientation;
@property (nonatomic) long long physicalOrientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceBounds;
@property (nonatomic) BOOL supportsDeepColor;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToDisplay:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGPoint { double x0; double x1; })convertPointToDisplay:(struct CGPoint { double x0; double x1; })a0;
- (id)description;
- (id)_initWithBackingType:(long long)a0;

@end
