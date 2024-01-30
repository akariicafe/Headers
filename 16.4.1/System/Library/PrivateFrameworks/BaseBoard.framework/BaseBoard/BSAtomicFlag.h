@interface BSAtomicFlag : NSObject {
    _Atomic BOOL _flag;
}

- (BOOL)setFlag:(BOOL)a0;
- (id)initWithFlag:(BOOL)a0;
- (BOOL)getFlag;
- (id)init;
- (id)description;

@end
