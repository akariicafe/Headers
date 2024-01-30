@class NSArray, NSDictionary;

@interface INRootCodableDescription : INCodableDescription

@property (retain, nonatomic, setter=_setReferencedCodableDescriptions:) NSArray *referencedCodableDescriptions;
@property (readonly, nonatomic) NSDictionary *_referencedCodableDescriptionsByClassName;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_establishReferencedCodableDescriptionsUsingTypes:(id)a0;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
