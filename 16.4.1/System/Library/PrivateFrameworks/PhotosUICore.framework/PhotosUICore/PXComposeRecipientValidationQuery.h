@class NSString, PXComposeRecipient;

@interface PXComposeRecipientValidationQuery : NSObject <NSCopying>

@property (readonly, nonatomic) PXComposeRecipient *composeRecipient;
@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, nonatomic) long long addressKind;
@property (nonatomic) long long validationType;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithComposeRecipient:(id)a0 address:(id)a1 addressKind:(long long)a2;

@end
