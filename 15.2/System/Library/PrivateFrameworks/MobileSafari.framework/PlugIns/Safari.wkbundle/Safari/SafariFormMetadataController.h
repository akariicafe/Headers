@protocol QuickWebsiteSearchEventListener;

@interface SafariFormMetadataController : _SFFormMetadataController {
    id<QuickWebsiteSearchEventListener> _quickWebsiteSearchEventListener;
}

- (void)didFindSearchURLTemplateString:(id)a0 inFrame:(id)a1 pageController:(id)a2;
- (void).cxx_destruct;
- (void)invalidate;

@end
