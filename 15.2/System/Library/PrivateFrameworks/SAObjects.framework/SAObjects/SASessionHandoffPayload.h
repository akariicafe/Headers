@class NSData, NSString;

@interface SASessionHandoffPayload : AceObject <SAHandoffPayload>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *sessionHandoffData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionHandoffPayload;
+ (id)sessionHandoffPayloadWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
