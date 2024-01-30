@class WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPICommandsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onCommand;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onCommand;

+ (id)commandsWithExtensionIdentifier:(id)a0 runtime:(id)a1;

- (void).cxx_destruct;
- (void)getAllWithCompletionHandler:(id)a0;

@end
