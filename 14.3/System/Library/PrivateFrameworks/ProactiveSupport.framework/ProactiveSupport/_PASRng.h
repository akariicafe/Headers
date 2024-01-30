@interface _PASRng : NSObject {
    struct { unsigned long long s[2]; } _state;
}

- (unsigned long long)next;
- (id)init;
- (float)nextFloat;
- (double)nextDouble;
- (id)initWithSeed:(unsigned long long)a0;

@end
