@interface NSUnitDispersion : NSDimension <NSSecureCoding>

@property (class, readonly, copy) NSUnitDispersion *partsPerMillion;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;

@end
