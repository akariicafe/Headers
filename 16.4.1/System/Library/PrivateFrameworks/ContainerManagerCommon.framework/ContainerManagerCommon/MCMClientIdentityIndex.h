@class NSData, NSString;

@interface MCMClientIdentityIndex : NSObject <NSCopying> {
    NSData *_auditToken;
    NSString *_personaUniqueString;
}

- (BOOL)isEqualToClientIdentityIndex:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 personaUniqueString:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
