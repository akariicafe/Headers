@class NSString;

@interface DIAttributeDocumentScanRequirements : DIAttributeImageCaptureRequirements <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *countryCode;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
