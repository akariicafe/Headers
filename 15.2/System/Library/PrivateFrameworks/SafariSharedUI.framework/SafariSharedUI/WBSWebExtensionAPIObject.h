@class NSUUID, WBSWebExtensionAPIRuntimeObjC;
@protocol WBSJSCallbackHandlerErrorReporter;

@interface WBSWebExtensionAPIObject : NSObject

@property (readonly, nonatomic) NSUUID *extensionIdentifier;
@property (readonly, weak, nonatomic) WBSWebExtensionAPIRuntimeObjC *runtime;
@property (readonly, nonatomic) BOOL isForMainWorld;
@property (readonly, nonatomic) id<WBSJSCallbackHandlerErrorReporter> callbackErrorReporter;

- (void).cxx_destruct;
- (void)initWithExtensionIdentifier:(id)a0 runtime:(id)a1 isForMainWorld:(BOOL)a2;

@end
