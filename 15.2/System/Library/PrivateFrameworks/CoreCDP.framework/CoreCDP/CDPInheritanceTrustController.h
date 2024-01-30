@interface CDPInheritanceTrustController : NSObject

- (BOOL)isInheritanceAccessKeyValid:(id)a0;
- (void)deleteInheritanceAccessKeyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)createInheritanceKeyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)recoverOctagonWithContext:(id)a0 inheritanceKey:(id)a1 completion:(id /* block */)a2;
- (void)validateAccessKey:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;

@end
