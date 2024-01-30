@interface SASProximityAction : NSObject

+ (unsigned long long)actionID;
+ (id)actionFromDictionary:(id)a0;

- (BOOL)hasResponse;
- (id)responsePayload;
- (id)requestPayload;
- (void)setResponseFromData:(id)a0;

@end
