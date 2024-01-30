@interface _DKCompatibility : NSObject

@property (nonatomic) long long min;
@property (nonatomic) long long max;

+ (id)compatibilityFromSerializedCompatibility:(id)a0;
+ (id)currentCompatibility;
+ (id)compatibilityWithMinVersion:(long long)a0 maxVersion:(long long)a1;

- (id)serialize;
- (id)description;
- (id)filterIncompatibleEvents:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)eventPredicate;
- (unsigned long long)hash;

@end
