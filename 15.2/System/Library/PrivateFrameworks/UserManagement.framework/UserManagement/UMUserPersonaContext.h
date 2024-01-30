@class NSObject;
@protocol OS_voucher;

@interface UMUserPersonaContext : NSObject <NSCopying> {
    NSObject<OS_voucher> *_voucher;
}

+ (id)currentPersonaContext;

- (void)contextAdopt;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyPersonaContext:(id *)a0;
- (void)setPropertiesFromUserPersona:(id)a0;

@end
