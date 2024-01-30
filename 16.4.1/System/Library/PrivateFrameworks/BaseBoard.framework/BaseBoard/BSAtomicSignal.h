@interface BSAtomicSignal : NSObject {
    _Atomic BOOL _flag;
}

- (BOOL)hasBeenSignalled;
- (BOOL)signal;
- (id)init;
- (id)description;

@end
