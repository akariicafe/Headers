@class UIColor;

@interface PXViewSpec : NSObject <NSCopying>

@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIColor *selectionHighlightColor;
@property (copy, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double displayScale;
@property (nonatomic) long long compositingFilterType;
@property (nonatomic, getter=isHidden) BOOL hidden;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
