@interface TSWPLineSpacing : NSObject <TSSPropertyValueArchiving, NSCopying>

@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) double amount;
@property (readonly, nonatomic) double baselineRule;

+ (id)lineSpacing;
+ (id)instanceWithArchive:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 unarchiver:(id)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithMode:(long long)a0 amount:(double)a1;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithMode:(long long)a0 amount:(double)a1 baselineRule:(double)a2;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithLocalizationDictionary:(id)a0;

@end
