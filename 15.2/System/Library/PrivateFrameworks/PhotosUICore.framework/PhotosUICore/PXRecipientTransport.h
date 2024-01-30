@class NSString;

@interface PXRecipientTransport : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, nonatomic) long long addressKind;

+ (id)new;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithAddress:(id)a0 addressKind:(long long)a1;

@end
