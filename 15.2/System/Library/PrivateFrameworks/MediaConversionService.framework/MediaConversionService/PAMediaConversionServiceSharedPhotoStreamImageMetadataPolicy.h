@interface PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy : PAMediaConversionServiceDefaultImageMetadataPolicy

+ (BOOL)supportsSecureCoding;
+ (void)_filterImageProperties:(id)a0 metadataWithKey:(id)a1 preserveProperties:(id)a2;
+ (id)policyWithAllowLocation:(BOOL)a0;

- (id)processMetadata:(id)a0;
- (BOOL)metadataNeedsProcessing:(id)a0;

@end
