@class NSString, LPLinkMetadata;

@interface MKMuninLinkPresentationActivityProvider : MKPlaceActivityProvider <UIActivityItemLinkPresentationSource> {
    LPLinkMetadata *_cachedMetadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityViewControllerLinkPresentationMetadata:(id)a0;
- (id)mapMetadataSpecialization;
- (void).cxx_destruct;

@end
