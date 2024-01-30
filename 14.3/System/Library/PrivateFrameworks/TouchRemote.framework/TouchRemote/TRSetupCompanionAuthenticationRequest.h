@class NSSet, ACAccount, AKDevice;

@interface TRSetupCompanionAuthenticationRequest : TRRequestMessage

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSSet *targetedAccountServices;
@property (retain, nonatomic) AKDevice *companionDevice;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
