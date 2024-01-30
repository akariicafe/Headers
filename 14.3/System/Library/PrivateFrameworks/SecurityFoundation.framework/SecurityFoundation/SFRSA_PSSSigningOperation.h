@protocol SFMaskGenerationFunction;

@interface SFRSA_PSSSigningOperation : SFRSASigningOperation {
    id _pssSigningOperationInternal;
}

@property (copy, nonatomic) id<SFMaskGenerationFunction> maskGenerationFunction;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithKeySpecifier:(id)a0 digestOperation:(id)a1;
- (id)initWithKeySpecifier:(id)a0 digestOperation:(id)a1 maskGenerationFunction:(id)a2;

@end
