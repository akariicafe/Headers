@class _SFWebProcessPlugInPageController, _WKRemoteObjectInterface;

@interface _SFWebProcessSharingLinkExtractor : NSObject <_SFWebProcessSharingLinkExtractor> {
    _SFWebProcessPlugInPageController *_pageController;
    _WKRemoteObjectInterface *_sharingLinkExtractorInterface;
}

- (void)_setUpRemoteInterface;
- (id)initWithPageController:(id)a0;
- (id)_extractSharingLink;
- (void)fetchSharingLinkWithCompletionHandler:(id /* block */)a0;
- (id)_extractCanonicalLinkWithInjectedObject:(id)a0;
- (id)_injectedLinkExtractorSourceString;
- (void)_withInjectedLinkExtractorObjectInFrame:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_extractDominantIFrameWithInjectedObject:(id)a0;

@end
