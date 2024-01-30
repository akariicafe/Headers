@class WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPINotificationsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onClicked;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onClicked;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onButtonClicked;

+ (id)notificationsWithExtensionIdentifier:(id)a0 runtime:(id)a1;

- (void).cxx_destruct;

@end
