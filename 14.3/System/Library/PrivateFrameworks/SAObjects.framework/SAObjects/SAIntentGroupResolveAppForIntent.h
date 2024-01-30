@class NSArray, SAIntentGroupProtobufMessage, NSString;

@interface SAIntentGroupResolveAppForIntent : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *appsList;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSString *jsonEncodedIntent;

+ (id)resolveAppForIntent;
+ (id)resolveAppForIntentWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
