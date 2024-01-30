@class WBSWebExtensionAPIStorageAreaObjC, WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPIStorageObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIStorageAreaObjC *_local;
    WBSWebExtensionAPIStorageAreaObjC *_sync;
    WBSWebExtensionAPIEventObjC *_onChanged;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIStorageAreaObjC *local;
@property (readonly, nonatomic) WBSWebExtensionAPIStorageAreaObjC *sync;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onChanged;

+ (id)storageWithExtensionIdentifier:(id)a0 runtime:(id)a1 isForMainWorld:(BOOL)a2;

- (void).cxx_destruct;

@end
