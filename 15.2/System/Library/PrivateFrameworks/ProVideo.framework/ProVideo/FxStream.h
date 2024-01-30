@interface FxStream : NSObject {
    struct FxStreamPriv { id x0; } *_priv;
}

- (id)pin;
- (id)provider;
- (void)setPin:(id)a0;
- (id)init;
- (void)dealloc;
- (id)createSampleAtTime:(double)a0;

@end
