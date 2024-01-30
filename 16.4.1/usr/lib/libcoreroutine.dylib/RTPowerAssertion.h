@interface RTPowerAssertion : NSObject {
    void *_powerAssertion;
}

- (void)dealloc;
- (id)initWithIdentifier:(id)a0 timeout:(double)a1;
- (id)init;

@end
