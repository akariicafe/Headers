@interface IDSIDSServerBag : IDSServerBag

+ (id)_bagCreationLock;
+ (id)defaultBag;

- (id)init;
- (BOOL)requiresIDSConnection;
- (BOOL)isInDebilitatedMode;
- (id)_bagDefaultsDomain;
- (unsigned long long)_bagDomain;

@end
