@class NSArray, NSNumber, NSString;

@interface SAIntentGroupResolveAppForIntentResponse : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *appsList;
@property (copy, nonatomic) NSNumber *needsConfirmation;
@property (copy, nonatomic) NSString *resolutionType;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resolveAppForIntentResponse;
+ (id)resolveAppForIntentResponseWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
