@class NSUUID, WBSWebExtensionAPIRuntimeBase;

@interface WBSWebExtensionAPIObject : NSObject {
    BOOL _isForMainWorld;
    NSUUID *_extensionIdentifier;
}

@property (readonly, weak, nonatomic) WBSWebExtensionAPIRuntimeBase *runtime;

- (void).cxx_destruct;
- (void)initWithExtensionIdentifier:(id)a0 runtime:(id)a1 isForMainWorld:(BOOL)a2;

@end
