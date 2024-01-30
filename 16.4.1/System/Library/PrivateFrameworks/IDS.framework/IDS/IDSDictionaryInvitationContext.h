@class NSString, NSDictionary;

@interface IDSDictionaryInvitationContext : NSObject <IDSInvitationContext>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *schemaIdentifier;
@property (readonly) long long contextType;
@property (readonly, copy) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)payload;
- (id)initWithCoder:(id)a0;
- (id)initWithPayload:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 schema:(id)a1;

@end
