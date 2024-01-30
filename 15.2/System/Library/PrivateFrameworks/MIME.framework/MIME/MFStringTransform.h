@interface MFStringTransform : NSObject {
    void **_underlying;
}

+ (id)identityTransform;

- (id)init;
- (id)_init;
- (void)dealloc;
- (id)initWithSoftBankHexData:(id)a0;

@end
