@interface IDSIDSServerBag : IDSServerBag

+ (id)_bagCreationLock;
+ (id)defaultBag;

- (unsigned long long)_bagDomain;
- (BOOL)isInDebilitatedMode;
- (BOOL)requiresIDSConnection;
- (id)init;
- (id)_bagDefaultsDomain;

@end
