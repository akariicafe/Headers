@class NSSet, ACAccount, AKDevice;

@interface TRSetupCompanionAuthenticationRequest : TRRequestMessage

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSSet *targetedAccountServices;
@property (retain, nonatomic) AKDevice *companionDevice;
@property (nonatomic) BOOL shouldUseAIDA;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
