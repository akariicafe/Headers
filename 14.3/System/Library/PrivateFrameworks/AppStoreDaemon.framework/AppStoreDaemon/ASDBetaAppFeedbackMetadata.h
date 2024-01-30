@class NSString, ASDBetaAppVersion;

@interface ASDBetaAppFeedbackMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *incidentID;
@property (copy) NSString *email;
@property (copy) ASDBetaAppVersion *version;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
