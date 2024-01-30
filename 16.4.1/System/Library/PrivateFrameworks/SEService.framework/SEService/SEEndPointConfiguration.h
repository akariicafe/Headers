@interface SEEndPointConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL enabledOnWire;
@property BOOL enabledOnContactless;
@property BOOL standardFlowAllowedOnWire;
@property BOOL standardFlowAllowedOnContactless;
@property BOOL fastFlowAllowedOnWire;
@property BOOL fastFlowAllowedOnContactless;
@property BOOL exchangeAllowedOnWire;
@property BOOL exchangeAllowedInFastFlow;
@property BOOL authorizeEndPointAllowed;
@property BOOL authorizeEndPointWithAuthorizeAllowed;
@property BOOL signAllowed;
@property BOOL exportEraseConfidentialMailBox;
@property BOOL confidentialDataAllowed;
@property BOOL nfcExpressOnlyInLPM;
@property BOOL terminationNotPersisted;
@property unsigned short lengthConfidentialMailBox;
@property unsigned short offsetConfidentialMailBox;
@property unsigned short lengthPrivateMailBox;
@property unsigned short offsetPrivateMailBox;

+ (id)hydraDefaults;
+ (id)homeDefaults;
+ (id)configurationWithOpt1:(unsigned char)a0 opt2:(unsigned char)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (unsigned char)opt1;
- (unsigned char)opt2;
- (unsigned char)optA;

@end
