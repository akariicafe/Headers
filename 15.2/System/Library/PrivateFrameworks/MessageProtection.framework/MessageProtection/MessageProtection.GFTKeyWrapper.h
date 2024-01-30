@interface MessageProtection.GFTKeyWrapper : NSObject

+ (id)wrapSeed:(id)a0 to:(id)a1 legacy:(BOOL)a2 error:(id *)a3;
+ (id)unwrapWrappedSeed:(id)a0 legacy:(BOOL)a1 using:(struct __SecKey { } *)a2 error:(id *)a3;

- (id)init;

@end
