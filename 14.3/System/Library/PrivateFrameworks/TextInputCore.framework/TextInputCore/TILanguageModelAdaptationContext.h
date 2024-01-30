@class NSString, NSDictionary;

@interface TILanguageModelAdaptationContext : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *appContext;
@property (readonly, nonatomic) NSString *recipientNameDigest;
@property (readonly, nonatomic) NSDictionary *recipientContext;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *identifierForResponseKit;
@property (nonatomic) BOOL isOnline;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithClientIdentifier:(id)a0 andRecipientRecord:(id)a1;
- (id)initWithClientIdentifier:(id)a0 andRecipientContactInfo:(id)a1;

@end
