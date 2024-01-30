@class NSIndexSet, PRMonogramColor;

@interface CNUILikenessRenderingScope : NSObject

@property (nonatomic) BOOL excludePointSizeInEqualityCheck;
@property (readonly, nonatomic) struct CGSize { double width; double height; } pointSize;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) double strokeWidth;
@property (readonly, nonatomic) struct CGColor { } *strokeColor;
@property (readonly, nonatomic) BOOL rightToLeft;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) unsigned long long backgroundStyle;
@property (readonly, nonatomic) PRMonogramColor *color;
@property (readonly, nonatomic) NSIndexSet *maskedAvatarIndices;

+ (id)renderingScopeWithPointSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 rightToLeft:(BOOL)a2 style:(unsigned long long)a3 color:(id)a4;
+ (id)renderingScopeWithPointSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 strokeWidth:(double)a2 strokeColor:(struct CGColor { } *)a3 rightToLeft:(BOOL)a4 style:(unsigned long long)a5 color:(id)a6;
+ (id)renderingScopeWithPointSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 strokeWidth:(double)a2 strokeColor:(struct CGColor { } *)a3 rightToLeft:(BOOL)a4 style:(unsigned long long)a5 backgroundStyle:(unsigned long long)a6 color:(id)a7 maskedAvatarIndices:(id)a8;

- (void)setStrokeColor:(struct CGColor { } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPointSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 strokeWidth:(double)a2 strokeColor:(struct CGColor { } *)a3 rightToLeft:(BOOL)a4 style:(unsigned long long)a5 backgroundStyle:(unsigned long long)a6 color:(id)a7 maskedAvatarIndices:(id)a8;

@end
