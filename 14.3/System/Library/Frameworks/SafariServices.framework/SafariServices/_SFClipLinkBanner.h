@class NSString, _SFClipLink;
@protocol _SFAppSuggestionBannerDelegate;

@interface _SFClipLinkBanner : _SFLinkBanner <_SFAppSuggestionBanner>

@property (readonly, nonatomic) _SFClipLink *clipLink;
@property (weak, nonatomic) id<_SFAppSuggestionBannerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getClipLinkBannerForClipLink:(id)a0 openActionHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)_initWithClipLink:(id)a0 openActionHandler:(id /* block */)a1;

@end
