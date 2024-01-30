@interface FBKAttachmentViewingControllerSelector : NSObject

+ (id)_opaqueVCWithItem:(id)a0;
+ (id)controllerForAttachment:(id)a0;
+ (id)controllerForItem:(id)a0;
+ (id)controllerForUrl:(id)a0;
+ (id)controllerForUrl:(id)a0 useFallback:(BOOL)a1;
+ (BOOL)fallbackToOpaqueViewer;

@end
