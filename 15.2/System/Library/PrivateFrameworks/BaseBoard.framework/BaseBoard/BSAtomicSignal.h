@interface BSAtomicSignal : NSObject {
    _Atomic BOOL _flag;
}

- (BOOL)signal;
- (BOOL)hasBeenSignalled;
- (id)description;
- (id)init;

@end
