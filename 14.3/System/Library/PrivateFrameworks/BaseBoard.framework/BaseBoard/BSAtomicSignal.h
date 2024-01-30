@interface BSAtomicSignal : NSObject {
    _Atomic BOOL _flag;
}

- (id)init;
- (BOOL)signal;
- (BOOL)hasBeenSignalled;
- (id)description;

@end
