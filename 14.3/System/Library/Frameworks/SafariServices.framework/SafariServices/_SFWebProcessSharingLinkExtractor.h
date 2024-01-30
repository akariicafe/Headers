@class _SFWebProcessPlugInPageController, _WKRemoteObjectInterface;

@interface _SFWebProcessSharingLinkExtractor : NSObject <_SFWebProcessSharingLinkExtractor> {
    _SFWebProcessPlugInPageController *_pageController;
    _WKRemoteObjectInterface *_sharingLinkExtractorInterface;
}

- (void).cxx_destruct;
- (void)_withInjectedLinkExtractorObjectInFrame:(id)a0 callback:(id /* block */)a1;
- (id)initWithPageController:(id)a0;
- (void)_setUpRemoteInterface;
- (id)_extractSharingLink;
- (id)_injectedLinkExtractorSourceString;
- (id)_extractDominantIFrameWithInjectedObject:(id)a0;
- (id)_extractCanonicalLinkWithInjectedObject:(id)a0;
- (void)fetchSharingLinkWithCompletionHandler:(id /* block */)a0;

@end
