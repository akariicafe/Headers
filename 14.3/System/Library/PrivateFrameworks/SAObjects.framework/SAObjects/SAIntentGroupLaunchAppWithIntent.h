@class SAIntentGroupProtobufMessage, NSString;

@interface SAIntentGroupLaunchAppWithIntent : SABaseClientBoundCommand

@property (retain, nonatomic) SAIntentGroupProtobufMessage *handledIntent;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *handledIntentResponse;
@property (copy, nonatomic) NSString *jsonEncodedHandledIntent;
@property (copy, nonatomic) NSString *jsonEncodedHandledIntentResponse;

+ (id)launchAppWithIntent;
+ (id)launchAppWithIntentWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
