@interface TSWPRuleOffset : NSObject <TSSPropertyValueArchiving, NSCopying>

@property (readonly, nonatomic) double dX;
@property (readonly, nonatomic) double dY;

+ (id)ruleOffset;
+ (id)instanceWithArchive:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 unarchiver:(id)a1;
+ (id)ruleOffsetWithDX:(double)a0 dY:(double)a1;

- (struct CGPoint { double x0; double x1; })pointValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (struct CGSize { double x0; double x1; })sizeValue;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithDX:(double)a0 dY:(double)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
