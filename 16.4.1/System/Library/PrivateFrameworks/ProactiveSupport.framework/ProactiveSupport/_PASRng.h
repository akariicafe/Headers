@interface _PASRng : NSObject {
    struct { unsigned long long s[2]; } _state;
}

- (unsigned long long)next;
- (id)initWithSeed:(unsigned long long)a0;
- (double)nextDouble;
- (id)init;
- (float)nextFloat;

@end
