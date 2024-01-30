@interface RMDRandomSource : NSObject <RMDRandom, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)sharedRandom;
+ (id)systemRandom;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (id)arrayByShufflingObjectsInArray:(id)a0;
- (long long)nextInt;
- (BOOL)nextBool;
- (float)nextUniform;

@end
