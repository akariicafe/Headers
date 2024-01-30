@interface PhotosUIApps.PUXStoryExportActivityViewController : UIActivityViewController <UIActivityViewControllerObjectManipulationDelegate, UIActivityViewControllerAirDropDelegate> {
    void /* unknown type, empty encoding */ exportActivityItemProvider;
    void /* unknown type, empty encoding */ exportPreviewViewController;
    void /* unknown type, empty encoding */ errorReporter;
    void /* unknown type, empty encoding */ fullSizePlayerAspect;
    void /* unknown type, empty encoding */ presentingFailureAlert;
    void /* unknown type, empty encoding */ $__lazy_storage_$_linkMetadata;
}

@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic, copy) id /* block */ completionWithItemsHandler;

- (id)_customizationGroupsForActivityViewController:(id)a0;
- (void)activityViewControllerDidFinishAirdropTransfer:(id)a0;
- (void).cxx_destruct;
- (id)initWithActivityItems:(id)a0 applicationActivities:(id)a1;

@end
