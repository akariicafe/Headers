@class Protocol, NSObject;

@interface NSConcreteProtocolChecker : NSProtocolChecker {
    NSObject *_target;
    Protocol *_protocol;
}

- (void)dealloc;
- (id)target;
- (id)protocol;
- (id)initWithTarget:(id)a0 protocol:(id)a1;

@end
