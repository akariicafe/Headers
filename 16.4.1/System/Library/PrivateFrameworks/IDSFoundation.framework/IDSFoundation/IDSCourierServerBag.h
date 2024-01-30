@interface IDSCourierServerBag : IDSServerBag

+ (id)sharedInstance;
+ (id)_sharedInstanceForClass:(Class)a0;
+ (id)_bagCreationLock;

- (unsigned long long)_bagDomain;
- (id)_bagDefaultsDomain;
- (id)init;

@end
