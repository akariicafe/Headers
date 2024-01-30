@interface PAMediaConversionServiceAddPFMediaMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

@property unsigned char type;
@property (retain) id value;

+ (BOOL)supportsSecureCoding;
+ (id)policyWithType:(unsigned char)a0 value:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)processMetadata:(id)a0;
- (BOOL)metadataNeedsProcessing:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
