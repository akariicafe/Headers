@interface PAMediaConversionServiceImageMetadataPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)standardPolicy;

- (void)encodeWithCoder:(id)a0;
- (id)processMetadata:(id)a0;
- (BOOL)metadataNeedsProcessing:(id)a0;
- (id)initWithCoder:(id)a0;

@end
