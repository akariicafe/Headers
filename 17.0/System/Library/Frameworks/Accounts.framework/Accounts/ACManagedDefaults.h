@interface ACManagedDefaults : NSObject

+ (id)sharedInstance;

- (void)setValue:(id)a0 forManagedDefault:(id)a1;
- (void)_writeManagedDefaults:(id)a0;
- (id)valueForManagedDefault:(id)a0;
- (id)_readManagedDefaults;

@end
