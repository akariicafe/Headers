@class NSString, NSArray, NSData, NSURL;

@interface CKCodeFunctionInvokeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSArray *requestLocalSerializations;
@property (copy, nonatomic) NSArray *requestLocalEnvelopes;
@property (nonatomic) unsigned long long dataProtectionType;
@property (copy, nonatomic) NSData *permittedRemoteMeasurement;
@property (copy, nonatomic) NSString *trustedTargetDomain;
@property (copy, nonatomic) NSString *trustedTargetOID;
@property (nonatomic) BOOL shouldSendRecordPCSKeys;
@property (nonatomic) BOOL enqueuedOnContainerService;
@property (copy, nonatomic) NSURL *clientRuntimeProvidedServiceURL;
@property (nonatomic) BOOL legacyIsLocalBit;
@property (nonatomic) BOOL shouldFetchAssetContentInMemory;

+ (void)applyDefaultParametersToServiceURLComponents:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
