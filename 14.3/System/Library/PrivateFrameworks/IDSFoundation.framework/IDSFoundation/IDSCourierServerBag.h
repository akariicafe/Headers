@interface IDSCourierServerBag : IDSServerBag

+ (id)sharedInstance;
+ (id)_bagCreationLock;
+ (id)_sharedInstanceForClass:(Class)a0;

- (id)init;
- (id)_bagDefaultsDomain;
- (unsigned long long)_bagDomain;

@end
