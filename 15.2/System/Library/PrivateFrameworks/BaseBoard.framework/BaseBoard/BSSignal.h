@interface BSSignal : NSObject {
    BOOL _signalled;
}

- (void)signal;
- (BOOL)hasBeenSignalled;
- (id)init;
- (void)reset;

@end
