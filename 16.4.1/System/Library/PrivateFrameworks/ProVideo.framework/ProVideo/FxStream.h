@interface FxStream : NSObject {
    struct FxStreamPriv { id x0; } *_priv;
}

- (id)provider;
- (void)dealloc;
- (id)init;
- (id)pin;
- (void)setPin:(id)a0;
- (id)createSampleAtTime:(double)a0;

@end
