@interface PADCounter : NSObject {
    unsigned long long _counter;
}

- (void)decrement;
- (id)init;
- (unsigned long long)getValue;
- (void)increment;
- (void)setToValue:(unsigned long long)a0;
- (void)decrementByValue:(unsigned long long)a0;
- (void)incrementByValue:(unsigned long long)a0;

@end
