@class SASRecognition, NSString;

@interface SASClientBoundConfusionNetwork : SABaseClientBoundCommand

@property (retain, nonatomic) SASRecognition *rawRecognition;
@property (copy, nonatomic) NSString *sessionId;

+ (id)clientBoundConfusionNetwork;
+ (id)clientBoundConfusionNetworkWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
