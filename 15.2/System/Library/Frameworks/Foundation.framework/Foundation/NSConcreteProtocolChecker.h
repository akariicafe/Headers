@class Protocol, NSObject;

@interface NSConcreteProtocolChecker : NSProtocolChecker {
    NSObject *_target;
    Protocol *_protocol;
}

- (id)target;
- (id)protocol;
- (void)dealloc;
- (id)initWithTarget:(id)a0 protocol:(id)a1;

@end
