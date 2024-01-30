@interface SASProximityAction : NSObject

+ (unsigned long long)actionID;
+ (id)actionFromDictionary:(id)a0;

- (BOOL)hasResponse;
- (id)requestPayload;
- (void)setResponseFromData:(id)a0;
- (id)responsePayload;

@end
