@interface PFIncreasingNumberGenerator : NSObject <PFSeededRandomNumberGenerator>

@property (nonatomic) unsigned long long seed;

- (id)initWithSeed:(unsigned long long)a0;
- (id)init;
- (unsigned long long)nextUnsignedIntegerLessThan:(unsigned long long)a0;

@end
