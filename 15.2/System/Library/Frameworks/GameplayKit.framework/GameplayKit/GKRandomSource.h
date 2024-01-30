@interface GKRandomSource : NSObject <GKRandom, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)sharedRandom;
+ (id)systemRandom;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (long long)nextInt;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)nextBool;
- (float)nextUniform;
- (id)arrayByShufflingObjectsInArray:(id)a0;

@end
