@interface BSAtomicFlag : NSObject {
    _Atomic BOOL _flag;
}

- (id)init;
- (id)initWithFlag:(BOOL)a0;
- (id)description;
- (BOOL)getFlag;
- (BOOL)setFlag:(BOOL)a0;

@end
