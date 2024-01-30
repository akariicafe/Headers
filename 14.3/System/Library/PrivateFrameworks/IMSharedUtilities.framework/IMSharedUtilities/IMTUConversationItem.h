@interface IMTUConversationItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long flags;


- (id)conversationUUID;
- (id)initWithCoder:(id)a0;
- (BOOL)isFromMe;
- (id)initWithDictionary:(id)a0;
- (id)copyDictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
