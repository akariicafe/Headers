@interface CNAtomicToggle : NSObject {
    _Atomic BOOL _state;
}

- (id)initWithState:(BOOL)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)trySetState:(BOOL)a0;

@end
