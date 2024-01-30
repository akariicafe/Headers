@class NSObject;
@protocol OS_voucher;

@interface UMUserPersonaContext : NSObject <NSCopying> {
    NSObject<OS_voucher> *_voucher;
}

+ (id)currentPersonaContext;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)contextAdopt;
- (id)copyPersonaContext:(id *)a0;
- (void)setPropertiesFromUserPersona:(id)a0;

@end
