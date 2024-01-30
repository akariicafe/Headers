@interface ATXGamePlayKitRandomSource : NSObject <ATXGamePlayKitRandom, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)sharedRandom;
+ (id)systemRandom;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (long long)nextInt;
- (float)nextUniform;
- (id)arrayByShufflingObjectsInArray:(id)a0;
- (BOOL)nextBool;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
