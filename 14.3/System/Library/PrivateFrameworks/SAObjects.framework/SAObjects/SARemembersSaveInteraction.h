@class NSString;

@interface SARemembersSaveInteraction : SABaseClientBoundCommand <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *jsonEncodedIntent;
@property (copy, nonatomic) NSString *jsonEncodedIntentResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)saveInteraction;
+ (id)saveInteractionWithDictionary:(id)a0 context:(id)a1;

@end
