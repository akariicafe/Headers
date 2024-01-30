@interface TSDExteriorTextWrap : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) BOOL isHTMLWrap;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) int fitType;
@property (readonly, nonatomic) double margin;
@property (readonly, nonatomic) double alphaThreshold;

+ (id)exteriorTextWrapWithIsHTMLWrap:(BOOL)a0 type:(int)a1 direction:(int)a2 fitType:(int)a3 margin:(double)a4 alphaThreshold:(double)a5;
+ (id)exteriorTextWrap;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIsHTMLWrap:(BOOL)a0 type:(int)a1 direction:(int)a2 fitType:(int)a3 margin:(double)a4 alphaThreshold:(double)a5;

@end
