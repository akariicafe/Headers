@class NSString, NSArray, NSURL, ENRegion;

@interface ENRegionServerNKDConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) ENRegion *region;
@property (readonly, copy, nonatomic) NSURL *tekLocalDownloadBaseURL;
@property (readonly, copy, nonatomic) NSURL *tekLocalDownloadIndexURL;
@property (readonly, nonatomic) double tekPublishInterval;
@property (readonly, copy, nonatomic) NSURL *tekUploadURL;
@property (readonly, copy, nonatomic) NSString *healthAuthorityID;
@property (readonly, copy, nonatomic) NSString *testVerificationAPIKey;
@property (readonly, copy, nonatomic) NSURL *testVerificationCertificateURL;
@property (readonly, copy, nonatomic) NSURL *testVerificationURL;
@property (readonly, copy, nonatomic) NSArray *travelerDownloadConfigurations;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithServerResponseDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
