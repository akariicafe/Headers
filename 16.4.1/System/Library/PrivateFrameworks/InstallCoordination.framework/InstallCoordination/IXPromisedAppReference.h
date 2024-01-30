@class IXPromisedAppReferenceSeed, IXApplicationIdentity;

@interface IXPromisedAppReference : IXOwnedDataPromise

@property (retain, nonatomic) IXPromisedAppReferenceSeed *seed;
@property (readonly, nonatomic) IXApplicationIdentity *identity;
@property (readonly, nonatomic) unsigned long long installationDomain;

+ (BOOL)supportsSecureCoding;
+ (id)acquireReferenceToAppWithIdentity:(id)a0 inDomain:(unsigned long long)a1 forClient:(unsigned long long)a2 ifMatchingPredicate:(id)a3 error:(id *)a4;
+ (id)acquireReferenceToAppWithIdentity:(id)a0 inDomain:(unsigned long long)a1 forClient:(unsigned long long)a2 matchingAppInRecord:(id)a3 error:(id *)a4;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSeed:(id)a0;
- (void)resetWithCompletion:(id /* block */)a0;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 forAppWithIdentity:(id)a2 inDomain:(unsigned long long)a3 ifMatchingPredicate:(id)a4 error:(id *)a5;
- (id)placeholderPromiseForInstallType:(unsigned long long)a0 withError:(id *)a1;
- (Class)seedClass;

@end
