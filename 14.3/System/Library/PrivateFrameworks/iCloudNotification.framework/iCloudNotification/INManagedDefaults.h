@interface INManagedDefaults : NSObject

+ (id)sharedInstance;

- (void)setValue:(id)a0 forManagedDefault:(id)a1;
- (id)_readManagedDefaults;
- (id)valueForManagedDefault:(id)a0;
- (void)_writeManagedDefaults:(id)a0;

@end
