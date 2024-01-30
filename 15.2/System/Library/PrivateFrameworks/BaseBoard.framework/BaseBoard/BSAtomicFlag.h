@interface BSAtomicFlag : NSObject {
    _Atomic BOOL _flag;
}

- (id)initWithFlag:(BOOL)a0;
- (id)description;
- (BOOL)getFlag;
- (id)init;
- (BOOL)setFlag:(BOOL)a0;

@end
