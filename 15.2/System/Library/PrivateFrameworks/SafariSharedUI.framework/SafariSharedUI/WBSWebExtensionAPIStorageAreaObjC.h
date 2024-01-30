@class WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPIStorageAreaObjC : WBSWebExtensionAPIObject {
    long long _storageType;
    WBSWebExtensionAPIEventObjC *_onChanged;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onChanged;
@property (readonly, nonatomic) double quotaBytes;
@property (readonly, nonatomic) double quotaBytesPerItem;
@property (readonly, nonatomic) double maxItems;
@property (readonly, nonatomic) double maxWriteOperationsPerHour;
@property (readonly, nonatomic) double maxWriteOperationsPerMinute;

+ (id)storageAreaWithExtensionIdentifier:(id)a0 runtime:(id)a1 isForMainWorld:(BOOL)a2 storageType:(long long)a3;

- (void).cxx_destruct;
- (BOOL)isPropertyAllowed:(id)a0;
- (void)getItems:(id)a0 browserContextController:(id)a1 context:(struct OpaqueJSContext { } *)a2 completionHandler:(id)a3 outExceptionString:(id *)a4;
- (void)getBytesInUseForItems:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)setItems:(id)a0 browserContextController:(id)a1 context:(struct OpaqueJSContext { } *)a2 completionHandler:(id)a3 outExceptionString:(id *)a4;
- (void)removeItems:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)clearWithBrowserContextController:(id)a0 completionHandler:(id)a1;
- (id)_decodeJSONStringRepresentations:(id)a0 context:(struct OpaqueJSContext { } *)a1 outErrorDescription:(id *)a2;
- (id)_storageAreaAPINamePrefix;
- (void)_getValuesForAllKeysForBrowserContextController:(id)a0 context:(struct OpaqueJSContext { } *)a1 completionHandler:(id)a2;
- (void)_getValuesForKeysWithDefaultValues:(id)a0 browserContextController:(id)a1 context:(struct OpaqueJSContext { } *)a2 completionHandler:(id)a3 outExceptionString:(id *)a4;
- (void)_getValuesForKeys:(id)a0 browserContextController:(id)a1 context:(struct OpaqueJSContext { } *)a2 completionHandler:(id)a3;
- (void)_initWithExtensionIdentifier:(id)a0 runtime:(id)a1 isForMainWorld:(BOOL)a2 storageType:(long long)a3;

@end
