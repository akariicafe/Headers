@class HMDValueTransformer, NSAttributeDescription;

@interface HMDAttributeCodingDescription : HMDPropertyCodingDescription {
    BOOL _shouldInline;
    HMDValueTransformer *_transformer;
}

@property (readonly) NSAttributeDescription *attribute;
@property (readonly) HMDValueTransformer *transformer;
@property (readonly) BOOL shouldInline;

- (void).cxx_destruct;

@end
