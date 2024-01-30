@class NSString, SAIntentGroupProtobufMessage, NSNumber;

@interface SAIntentGroupUpdateIntentSlot : SABaseCommand <SAServerBoundCommand, SAIntentGroupSetMapLocation>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *intentSlotKeyPath;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intentSlotResolutionResult;
@property (copy, nonatomic) NSNumber *intentSlotValueIndex;
@property (copy, nonatomic) NSString *intentTypeName;
@property (copy, nonatomic) NSString *jsonEncodedIntentSlotResolutionResult;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *location;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateIntentSlot;
+ (id)updateIntentSlotWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
