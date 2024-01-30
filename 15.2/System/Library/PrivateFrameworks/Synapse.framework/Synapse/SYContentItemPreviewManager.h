@interface SYContentItemPreviewManager : NSObject

+ (void)_loadPreviewMetadataForItem:(id)a0 fullDetail:(BOOL)a1 completion:(id /* block */)a2;
+ (void)_loadPreviewForAppContentItem:(id)a0 completion:(id /* block */)a1;
+ (void)_loadPreviewUsingLPForItem:(id)a0 fullDetail:(BOOL)a1 completion:(id /* block */)a2;
+ (void)loadPreviewDataForItems:(id)a0 fullDetail:(BOOL)a1;

@end
