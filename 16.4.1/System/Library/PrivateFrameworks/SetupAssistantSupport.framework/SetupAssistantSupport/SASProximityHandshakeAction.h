@class SASProximityHandshake;

@interface SASProximityHandshakeAction : SASProximityAction

@property (retain) SASProximityHandshake *handshake;

+ (unsigned long long)actionID;

- (BOOL)hasResponse;
- (id)init;
- (void).cxx_destruct;
- (id)responsePayload;
- (void)setResponseFromData:(id)a0;

@end
