@interface _NSExtensionContextVendor : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)_startListening;
+ (id)_extensionDictionary;
+ (Class)_extensionContextClass;
+ (Class)_extensionPrincipalClass;
+ (void)_startListening:(BOOL)a0;
+ (id)_sharedExtensionContextVendor;
+ (id)_extensionMainStoryboard;

- (id)_init;
- (void)_tearDownContextWithUUID:(id)a0;
- (void)_setPrincipalObject:(id)a0 forUUID:(id)a1;
- (id)init;
- (id)_extensionContextForUUID:(id)a0;

@end
