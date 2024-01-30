@class NSString, PXCMMComposeRecipient;

@interface PXCMMComposeRecipientValidationQuery : NSObject <NSCopying>

@property (readonly, nonatomic) PXCMMComposeRecipient *composeRecipient;
@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, nonatomic) long long addressKind;
@property (nonatomic) long long validationType;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithComposeRecipient:(id)a0 address:(id)a1 addressKind:(long long)a2;
- (BOOL)isEqual:(id)a0;

@end
