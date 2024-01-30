@interface FxStream : NSObject {
    struct FxStreamPriv { id x0; } *_priv;
}

- (id)pin;
- (id)init;
- (void)setPin:(id)a0;
- (void)dealloc;
- (id)provider;
- (id)createSampleAtTime:(double)a0;

@end
