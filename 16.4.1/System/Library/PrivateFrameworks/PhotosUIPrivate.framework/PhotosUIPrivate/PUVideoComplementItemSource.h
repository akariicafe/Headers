@class NSString, NSURL, PFVideoComplement;

@interface PUVideoComplementItemSource : NSObject <UIActivityItemSource> {
    NSURL *_bundleURL;
    PFVideoComplement *_videoComplement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewController:(id)a0 thumbnailImageForActivityType:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)activityViewControllerSubject:(id)a0;
- (id)_initWithVideoComplement:(id)a0 bundleAtURL:(id)a1;
- (id)initWithVideoComplement:(id)a0;
- (id)initWithVideoComplementBundleAtURL:(id)a0;

@end
