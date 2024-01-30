@interface CNAtomicToggle : NSObject {
    _Atomic BOOL _state;
}

- (id)initWithState:(BOOL)a0;
- (id)init;
- (BOOL)trySetState:(BOOL)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
