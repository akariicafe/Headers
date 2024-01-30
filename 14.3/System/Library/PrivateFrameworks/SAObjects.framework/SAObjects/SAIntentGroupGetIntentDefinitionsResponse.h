@class NSArray, NSString;

@interface SAIntentGroupGetIntentDefinitionsResponse : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *intentDefinitionInfos;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getIntentDefinitionsResponseWithDictionary:(id)a0 context:(id)a1;
+ (id)getIntentDefinitionsResponse;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
