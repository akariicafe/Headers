@class NSString, UIColor;

@interface ICAttributionViewHighlightConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adjustedFrame;
@property (copy, nonatomic) UIColor *color;
@property (nonatomic) double alpha;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToICAttributionViewHighlightConfiguration:(id)a0;

@end
