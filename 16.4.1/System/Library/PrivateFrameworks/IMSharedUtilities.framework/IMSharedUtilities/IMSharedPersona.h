@class NSString, NSDictionary;

@interface IMSharedPersona : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *senderID;
@property (readonly, copy, nonatomic) NSString *suggestedDisplayName;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)personaFromDictionaryRepresentation:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSenderID:(id)a0 suggestedDisplayName:(id)a1;

@end
