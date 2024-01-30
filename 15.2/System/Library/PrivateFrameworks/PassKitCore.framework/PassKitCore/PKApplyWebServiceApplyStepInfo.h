@class NSString, NSArray;

@interface PKApplyWebServiceApplyStepInfo : NSObject

@property (copy, nonatomic) NSString *conversationIdentifier;
@property (readonly, nonatomic) unsigned long long contextType;
@property (readonly, copy, nonatomic) NSArray *pages;
@property (readonly, copy, nonatomic) NSString *coreIDVSessionID;
@property (readonly, copy, nonatomic) NSString *coreIDVServiceProviderName;
@property (readonly, copy, nonatomic) NSString *coreIDVTier;
@property (readonly, copy, nonatomic) NSArray *encryptionCertificates;
@property (readonly, copy, nonatomic) NSString *encryptionVersion;

- (void)_handleCertificates:(id)a0;
- (id)initWithJSONObject:(id)a0 featureApplication:(id)a1;
- (void).cxx_destruct;

@end
