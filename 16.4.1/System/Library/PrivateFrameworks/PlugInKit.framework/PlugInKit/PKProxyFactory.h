@class NSString;

@interface PKProxyFactory : NSObject <PKProxyFactory>

@property (readonly) BOOL hasLSDatabaseAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultFactory;

- (id)plugInRecordEnumeratorWithExtensionPointName:(id)a0 platform:(unsigned int)a1;
- (id)plugInRecordForUUID:(id)a0;
- (id)applicationProxyForBundleURL:(id)a0;
- (id)plugInKitProxyForUUID:(id)a0;
- (id)pluginKitProxyForIdentifier:(id)a0;
- (id)extensionPointForIdentifier:(id)a0 platform:(id)a1;
- (id)plugInRecordForIdentifier:(id)a0;
- (id)plugInRecordEnumerator;
- (id)defaultApplicationWorkspace;
- (id)plugInKitProxyForURL:(id)a0;

@end
