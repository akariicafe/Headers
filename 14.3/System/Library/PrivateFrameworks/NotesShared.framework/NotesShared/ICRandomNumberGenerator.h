@interface ICRandomNumberGenerator : NSObject {
    unsigned int _randomSeed;
}

- (unsigned long long)randomIndexMin:(unsigned long long)a0 max:(unsigned long long)a1;
- (double)randomFloat;
- (id)randomObject:(id)a0;
- (id)initWithSeed:(unsigned int)a0;

@end
