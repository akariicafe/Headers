@class PETAggregateStateStorage;

@interface PETAggregateState : NSObject {
    PETAggregateStateStorage *_storage;
    struct { unsigned long long s[2]; } _rng;
}

+ (unsigned char)hashForString:(id)a0;

- (id)initWithPath:(id)a0;
- (id)initWithStorage:(id)a0;
- (id)init;
- (BOOL)checkIntegrity;
- (void).cxx_destruct;
- (void)updateDistributionWithValue:(double)a0 forKey:(const void *)a1 keyLength:(unsigned short)a2 maxSampleSize:(unsigned short)a3;
- (void)reset;
- (id)description;
- (void)updateCounterTo:(double)a0 forKey:(const void *)a1 keyLength:(unsigned short)a2;
- (void)incrementCounterBy:(double)a0 forKey:(id)a1;
- (void)updateCounterTo:(double)a0 forKey:(id)a1;
- (void)enumerateAndResetCounters:(id /* block */)a0 distributions:(id /* block */)a1;
- (id)initInMemory;
- (void)updateDistributionWithValue:(double)a0 forKey:(id)a1 maxSampleSize:(unsigned short)a2;
- (void)enumerateCounters:(id /* block */)a0 distributions:(id /* block */)a1;
- (void)incrementCounterBy:(double)a0 forKey:(const void *)a1 keyLength:(unsigned short)a2;

@end
