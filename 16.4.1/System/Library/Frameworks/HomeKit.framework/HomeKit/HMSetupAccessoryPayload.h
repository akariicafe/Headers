@class NSString, NSArray, NSURL, HMAccessoryCategory, NSNumber, HMCHIPAccessorySetupPayload;

@interface HMSetupAccessoryPayload : NSObject <HMFObject, NSMutableCopying, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *setupPayloadURL;
@property (copy, nonatomic) NSString *setupID;
@property (copy, nonatomic) NSNumber *categoryNumber;
@property (copy, nonatomic) NSString *productNumber;
@property (nonatomic) BOOL supportsIP;
@property (nonatomic) BOOL supportsWAC;
@property (nonatomic) BOOL supportsBTLE;
@property (nonatomic, getter=isPaired) BOOL paired;
@property (copy, nonatomic) NSNumber *threadIdentifier;
@property (retain, nonatomic) HMCHIPAccessorySetupPayload *chipAccessorySetupPayload;
@property (readonly, copy, nonatomic) NSString *setupCode;
@property (readonly, nonatomic) long long communicationProtocol;
@property (readonly, copy, nonatomic) HMAccessoryCategory *category;
@property (readonly, nonatomic) BOOL requiresMatterCustomCommissioningFlow;
@property (readonly, copy, nonatomic) NSString *accessoryName;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithHAPSetupCode:(id)a0;
- (id)initWithHAPSetupPayloadURL:(id)a0 error:(id *)a1;
- (id)initWithSetupCode:(id)a0;
- (id)initWithSetupCode:(id)a0 communicationProtocol:(long long)a1;
- (id)initWithSetupPayloadURL:(id)a0 error:(id *)a1;

@end
