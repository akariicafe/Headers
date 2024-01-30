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
@property unsigned short lengthConfidentialMailBox;
@property unsigned short offsetConfidentialMailBox;
@property unsigned short lengthPrivateMailBox;
@property unsigned short offsetPrivateMailBox;

+ (id)configurationWithOpt1:(unsigned char)a0 opt2:(unsigned char)a1;

- (id)init;
- (unsigned char)opt1;
- (unsigned char)opt2;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
