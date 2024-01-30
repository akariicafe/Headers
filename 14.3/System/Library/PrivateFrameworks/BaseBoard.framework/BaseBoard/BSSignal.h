@interface BSSignal : NSObject {
    BOOL _signalled;
}

- (id)init;
- (void)reset;
- (void)signal;
- (BOOL)hasBeenSignalled;

@end
