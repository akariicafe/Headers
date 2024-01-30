@class SASProximityHandshake;

@interface SASProximityHandshakeAction : SASProximityAction

@property (retain) SASProximityHandshake *handshake;

+ (unsigned long long)actionID;

- (void).cxx_destruct;
- (id)init;
- (BOOL)hasResponse;
- (id)responsePayload;
- (void)setResponseFromData:(id)a0;

@end
