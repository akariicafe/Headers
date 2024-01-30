@class NSURL, NSString;

@interface SAURIHandoffPayload : AceObject <SAHandoffPayload>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *link;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uRIHandoffPayload;
+ (id)uRIHandoffPayloadWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
