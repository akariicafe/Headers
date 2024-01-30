@class NSString, NSURL, HMAccessoryCategory, NSNumber;

@interface HMSetupAccessoryPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *accessoryName;
@property (retain, nonatomic) NSString *setupCode;
@property (retain, nonatomic) NSString *setupID;
@property (retain, nonatomic) NSNumber *categoryNumber;
@property (nonatomic) BOOL supportsIP;
@property (nonatomic) BOOL supportsWAC;
@property (nonatomic) BOOL supportsBTLE;
@property (retain, nonatomic) NSNumber *threadIdentifier;
@property (retain, nonatomic) NSString *productData;
@property (retain, nonatomic) NSString *productNumber;
@property (nonatomic) BOOL paired;
@property (retain, nonatomic) NSNumber *flags;
@property (retain, nonatomic) NSURL *setupPayloadURL;
@property (readonly, nonatomic) HMAccessoryCategory *category;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_parseSetupPayload:(id)a0;
- (id)initWithSetupCode:(id)a0;
- (id)initWithSetupPayload:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithSetupPayloadURL:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;

@end
