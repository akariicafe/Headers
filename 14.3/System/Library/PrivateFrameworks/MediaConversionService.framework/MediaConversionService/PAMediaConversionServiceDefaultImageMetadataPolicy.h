@interface PAMediaConversionServiceDefaultImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

@property float lossyCompressionQuality;

+ (BOOL)supportsSecureCoding;
+ (id)standardPolicy;
+ (id)policyWithLossyCompressionQuality:(float)a0;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)processMetadata:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)metadataNeedsProcessing:(id)a0;
- (id)initWithLossyCompressionQuality:(float)a0;

@end
