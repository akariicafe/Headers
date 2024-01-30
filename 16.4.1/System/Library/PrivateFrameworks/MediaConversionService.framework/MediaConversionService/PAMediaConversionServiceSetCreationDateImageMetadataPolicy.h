@class NSTimeZone, NSDate;

@interface PAMediaConversionServiceSetCreationDateImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

@property (retain) NSDate *creationDate;
@property (retain) NSTimeZone *timeZone;

+ (BOOL)supportsSecureCoding;
+ (id)policyWithCreationDate:(id)a0 inTimeZone:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)processMetadata:(id)a0;
- (BOOL)metadataNeedsProcessing:(id)a0;

@end
