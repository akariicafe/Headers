@class NSString, _SFActivityItemCustomizationController, NSURL, NSArray, _SFPrintController, _SFActivityItemProviderCollection, NSMutableSet, _SFSafariSharingExtensionController;
@protocol _SFActivityViewControllerDelegate;

@interface _SFActivityViewController : UIActivityViewController <_SFActivityItemCustomizationDelegate> {
    _SFActivityItemProviderCollection *_itemProviderCollection;
    NSArray *_initialApplicationActivities;
    NSMutableSet *_activityTypesExcludedDueToSelectedCustomization;
}

@property (copy, nonatomic) NSString *currentExtensionIdentifier;
@property (weak, nonatomic) _SFSafariSharingExtensionController *sharingExtensionController;
@property (weak, nonatomic) id<_SFActivityViewControllerDelegate> delegate;
@property (retain, nonatomic) _SFActivityItemCustomizationController *customizationController;
@property (nonatomic) long long provenance;
@property (retain, nonatomic) NSURL *sharingURL;
@property (readonly, nonatomic) NSArray *activityItemProviders;
@property (retain, nonatomic) _SFPrintController *printController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activeWebPageExtensionItemForURL:(id)a0 withPreviewImageHandler:(id /* block */)a1;

- (void)_updateActivityItems:(id)a0 applicationActivities:(id)a1;
- (void)_performActivity:(id)a0;
- (void)_updateActivityItems:(id)a0;
- (void)_prepareActivity:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_executeActivity;
- (id)initWithActivityItems:(id)a0 applicationActivities:(id)a1 sharingURL:(id)a2 sourceURL:(id)a3;
- (void)_updatePrintControllerWithActivityItems:(id)a0;
- (void)activityDidComplete:(id)a0 withReturnedItems:(id)a1 success:(BOOL)a2;
- (void)_processJavaScriptFinalizeReturnedItems:(id)a0 forExtension:(id)a1;
- (BOOL)_containsProviderForDownloadActivityAndGetMIMEType:(id *)a0 uti:(id *)a1;
- (void)prepareJavaScriptExtensionItemForActivity:(id)a0;
- (void)_preparePrint:(id)a0 completion:(id /* block */)a1;
- (id)_extensionItemForExtensionActivity:(id)a0;
- (id)_javaScriptProcessingFileURLInExtension:(id)a0;
- (void)customizationControllerCustomizationsDidChange:(id)a0;
- (id)initWithActivityItemProviderCollection:(id)a0 applicationActivities:(id)a1 sharingURL:(id)a2 sourceURL:(id)a3;

@end
