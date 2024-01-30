@class SAIntentGroupProtobufMessage, NSString, NSNumber;

@interface SAIntentGroupResolveIntentSlot : SABaseClientBoundCommand

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSString *intentSlotKeyPath;
@property (copy, nonatomic) NSNumber *intentSlotValueIndex;
@property (copy, nonatomic) NSString *jsonEncodedIntent;

+ (id)resolveIntentSlot;
+ (id)resolveIntentSlotWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
