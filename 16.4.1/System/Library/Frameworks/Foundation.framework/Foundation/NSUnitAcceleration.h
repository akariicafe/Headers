@interface NSUnitAcceleration : NSDimension <NSSecureCoding>

@property (class, readonly, copy) NSUnitAcceleration *metersPerSecondSquared;
@property (class, readonly, copy) NSUnitAcceleration *gravity;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;

@end
