@class SASProximityInformation;

@interface SASProximityInformationAction : SASProximityAction

@property (retain) SASProximityInformation *information;

+ (unsigned long long)actionID;

- (void).cxx_destruct;
- (id)init;
- (BOOL)hasResponse;
- (id)responsePayload;
- (void)setResponseFromData:(id)a0;

@end
