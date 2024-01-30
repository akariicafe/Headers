@interface SeymourServices.AccountStatusObserver : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ status;
}

- (void)onAccountChanged;
- (void)onIdentityChanged;

@end
