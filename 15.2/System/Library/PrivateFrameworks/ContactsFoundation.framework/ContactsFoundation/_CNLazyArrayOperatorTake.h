@interface _CNLazyArrayOperatorTake : _CNLazyArrayOperator {
    unsigned long long _remainingTakeCount;
}

- (id)nextObject;
- (id)initWithInput:(id)a0 limit:(unsigned long long)a1;

@end
