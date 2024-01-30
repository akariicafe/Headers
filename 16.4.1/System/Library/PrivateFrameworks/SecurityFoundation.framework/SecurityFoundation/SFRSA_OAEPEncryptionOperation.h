@protocol SFMaskGenerationFunction;

@interface SFRSA_OAEPEncryptionOperation : SFRSAEncryptionOperation {
    id _oaepEncryptionOperationInternal;
}

@property (copy, nonatomic) id<SFMaskGenerationFunction> maskGenerationFunction;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKeySpecifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeySpecifier:(id)a0 maskGenerationFunction:(id)a1;

@end
