@class SASProximityInformation;

@interface SASProximityInformationAction : SASProximityAction

@property (retain) SASProximityInformation *information;

+ (unsigned long long)actionID;

- (BOOL)hasResponse;
- (id)init;
- (void).cxx_destruct;
- (id)responsePayload;
- (void)setResponseFromData:(id)a0;

@end
