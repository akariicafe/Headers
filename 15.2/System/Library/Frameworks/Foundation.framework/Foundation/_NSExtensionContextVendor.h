@interface _NSExtensionContextVendor : NSObject

+ (id)_sharedExtensionContextVendor;
+ (id)_extensionDictionary;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)_startListening:(BOOL)a0;
+ (void)_startListening;
+ (Class)_extensionContextClass;
+ (id)_extensionMainStoryboard;
+ (Class)_extensionPrincipalClass;

- (id)_extensionContextForUUID:(id)a0;
- (id)init;
- (id)_init;
- (void)_setPrincipalObject:(id)a0 forUUID:(id)a1;
- (void)_tearDownContextWithUUID:(id)a0;

@end
