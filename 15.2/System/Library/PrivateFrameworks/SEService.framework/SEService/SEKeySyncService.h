@interface SEKeySyncService : NSObject

+ (id)transcodeTLKShares:(id)a0 fromCurrentIdentifier:(id)a1 toIdentity:(id)a2 outError:(id *)a3;
+ (void)recoveryDidComplete:(id)a0;
+ (void)shouldRollKeysNow:(id)a0 altDISD:(id)a1;

@end
