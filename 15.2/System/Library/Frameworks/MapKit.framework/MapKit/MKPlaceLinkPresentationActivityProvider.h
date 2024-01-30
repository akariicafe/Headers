@class NSString, LPLinkMetadata;

@interface MKPlaceLinkPresentationActivityProvider : MKPlaceActivityProvider <UIActivityItemLinkPresentationSource> {
    LPLinkMetadata *_cachedMetadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityViewControllerLinkPresentationMetadata:(id)a0;
- (void).cxx_destruct;

@end
