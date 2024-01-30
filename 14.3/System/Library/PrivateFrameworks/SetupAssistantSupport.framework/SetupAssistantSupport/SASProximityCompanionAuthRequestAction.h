@class AKDevice, ACAccount;

@interface SASProximityCompanionAuthRequestAction : SASProximityAction

@property (retain) AKDevice *companionDevice;
@property (retain) ACAccount *account;

+ (unsigned long long)actionID;

- (void).cxx_destruct;
- (BOOL)hasResponse;
- (void)setResponseFromData:(id)a0;
- (id)responsePayload;
- (id)idmsAccountForiCloud;

@end
