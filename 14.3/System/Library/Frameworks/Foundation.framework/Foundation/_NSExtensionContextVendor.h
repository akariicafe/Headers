@interface _NSExtensionContextVendor : NSObject

+ (void)_startListening;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (Class)_extensionContextClass;
+ (void)_startListening:(BOOL)a0;
+ (id)_sharedExtensionContextVendor;
+ (id)_extensionDictionary;
+ (Class)_extensionPrincipalClass;
+ (id)_extensionMainStoryboard;

- (id)init;
- (void)_tearDownContextWithUUID:(id)a0;
- (void)_setPrincipalObject:(id)a0 forUUID:(id)a1;
- (id)_init;
- (id)_extensionContextForUUID:(id)a0;

@end
