@class NSString;

@interface SASProximityPasscodeValidationAction : SASProximityAction

@property (retain) NSString *passcode;
@property BOOL passcodeValid;

+ (unsigned long long)actionID;
+ (id)actionFromDictionary:(id)a0;

- (void).cxx_destruct;
- (BOOL)hasResponse;
- (id)responsePayload;
- (id)requestPayload;
- (void)setResponseFromData:(id)a0;

@end
