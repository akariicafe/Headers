@class NSString;

@interface UISUIOpenInByCopySecurityScopedResource : UISUISecurityScopedResource

@property (copy, nonatomic) NSString *bookmarkExportDataEncodedAsString;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
