@class NSString, NSDictionary, NSURL, NSNumber;

@interface HMAccessoryDiagnosticsMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *snapshotPath;
@property (readonly, copy) NSDictionary *urlParameters;
@property (readonly) NSURL *privacyPolicyURL;
@property (readonly) NSURL *uploadDestination;
@property (readonly) NSNumber *consentVersion;
@property (readonly) NSNumber *uploadType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSnapshotPath:(id)a0 urlParameters:(id)a1 privacyPolicyURL:(id)a2 uploadDestination:(id)a3 consentVersion:(id)a4 uploadType:(id)a5;
- (id)attributeDescriptions;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
