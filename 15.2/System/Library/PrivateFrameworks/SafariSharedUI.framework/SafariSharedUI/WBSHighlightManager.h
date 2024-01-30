@class NSMutableArray, NSArray, NSString, SLHighlightCenter, NSCache;

@interface WBSHighlightManager : NSObject <SLHighlightCenterDelegate> {
    SLHighlightCenter *_highlightCenter;
    NSCache *_linkDataCache;
    NSMutableArray *_deferredAttributionPresenters;
}

@property (class, readonly, nonatomic, getter=isHighlightCenterEnabled) BOOL highlightCenterEnabled;

@property (readonly, nonatomic, getter=_isInterstellarEnabledForSafari) BOOL interstellarEnabledForSafari;
@property (copy, nonatomic, setter=_setHighlights:) NSArray *highlights;
@property (readonly, nonatomic) BOOL isFetchingHighlights;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateAttributionViews;
- (void)_handleRemovalOfHighlights:(id)a0;
- (void)loadLinkMetadataForMessageWithGUID:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)highlightCenterSettingsEnablementHasChanged:(id)a0;
- (void)highlightCenter:(id)a0 didRemoveHighlights:(id)a1;
- (void)highlightCenterDidAddHighlights:(id)a0;
- (void)_updateHighlights;
- (void)_enableNewSLAttributionViewAppereance;
- (void)_showBannerIfNeededForPresenter:(id)a0;
- (void)_didFetchHighlights;
- (void)fetchMetadataForHighlight:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateHighlightForAttributionPresenter:(id)a0;
- (void)sendFeedbackForHighlight:(id)a0 withType:(unsigned long long)a1 inPrivateBrowsing:(BOOL)a2;

@end
