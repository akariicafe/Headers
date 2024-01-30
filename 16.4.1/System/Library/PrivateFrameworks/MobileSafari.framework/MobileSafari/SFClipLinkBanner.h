@class NSString, SFClipLink, SFOverlayProvider;
@protocol SFAppSuggestionBannerDelegate;

@interface SFClipLinkBanner : SFLinkBanner <SFAppSuggestionBanner> {
    SFOverlayProvider *_overlayProvider;
}

@property (readonly, nonatomic) SFClipLink *clipLink;
@property (weak, nonatomic) id<SFAppSuggestionBannerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getClipLinkBannerForClipLink:(id)a0 openActionHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)overlayProvider;
- (id)_initWithClipLink:(id)a0 openActionHandler:(id /* block */)a1;

@end
