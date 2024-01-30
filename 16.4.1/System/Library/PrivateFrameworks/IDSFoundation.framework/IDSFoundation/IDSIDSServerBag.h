@interface IDSIDSServerBag : IDSServerBag

+ (id)defaultBag;
+ (id)_bagCreationLock;

- (unsigned long long)_bagDomain;
- (BOOL)requiresIDSConnection;
- (id)_bagDefaultsDomain;
- (id)init;
- (BOOL)isInDebilitatedMode;

@end
