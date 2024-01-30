@class NSString;

@interface AFPowerAssertionManager : NSObject {
    unsigned int _powerAssertion;
    NSString *_debugName;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)releasePowerAssertion;
- (void)takePowerAssertionWithName:(id)a0;

@end
