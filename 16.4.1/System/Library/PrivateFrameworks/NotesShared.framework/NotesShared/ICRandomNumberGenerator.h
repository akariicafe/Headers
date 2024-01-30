@interface ICRandomNumberGenerator : NSObject {
    unsigned int _randomSeed;
}

- (id)initWithSeed:(unsigned int)a0;
- (double)randomFloat;
- (unsigned long long)randomIndexMin:(unsigned long long)a0 max:(unsigned long long)a1;
- (id)randomObject:(id)a0;

@end
