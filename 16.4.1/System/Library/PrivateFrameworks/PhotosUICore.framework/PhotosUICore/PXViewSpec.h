@class UIColor, NSString;

@interface PXViewSpec : NSObject <NSCopying>

@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIColor *selectionHighlightColor;
@property (copy, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) NSString *cornerCurve;
@property (nonatomic) unsigned long long cornerMask;
@property (nonatomic) double displayScale;
@property (nonatomic) double rotationAngle;
@property (nonatomic) long long compositingFilterType;
@property (nonatomic, getter=isHidden) BOOL hidden;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;

@end
