@class PXContentSyndicationPhotoKitSocialLayerHighlightProvider, NSString, CNContact, UIImage, SLHighlight, NSAttributedString, PHAsset;
@protocol PXContentSyndicationAttributionInfoChangeDelegate;

@interface PXContentSyndicationAttributionInfo : NSObject

@property (copy, nonatomic) NSString *syndicationSenderDisplayName;
@property (copy, nonatomic) NSString *senderAppName;
@property (copy, nonatomic) NSString *syndicationSharedWithTitle;
@property (copy, nonatomic) NSAttributedString *savedFromTitle;
@property (nonatomic) BOOL syndicationAttributionInfoIsLoading;
@property (nonatomic) BOOL hasSyndicationAttributionInfo;
@property (retain, nonatomic) UIImage *senderThumbnailImage;
@property (retain, nonatomic) NSString *syndicationAttributionIdentifier;
@property (copy, nonatomic) NSString *axDescriptionForSyndicationContactImage;
@property (copy, nonatomic) NSString *axDescriptionForSyndicationReplyButton;
@property (retain, nonatomic) SLHighlight *highlight;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) PHAsset *asset;
@property (copy, nonatomic) NSString *receivingGroupDisplayName;
@property (retain, nonatomic) PXContentSyndicationPhotoKitSocialLayerHighlightProvider *highlightProvider;
@property (weak, nonatomic) id<PXContentSyndicationAttributionInfoChangeDelegate> changeDelegate;
@property (readonly, copy, nonatomic) NSString *axDescriptionForSyndicationLoadingIndicator;

+ (id)_sharedContactFetchSerialQueue;
+ (id)appIconFetchQueue;
+ (id)_nameStringForContact:(id)a0;

- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void)fetchAppIconThumbnailImageWithCompletion:(id /* block */)a0;
- (void)createSyndicatedAppIconWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 completion:(id /* block */)a2;
- (void)_invalidateAttributedStrings;
- (id)_sfaAttributes;
- (void)_updateAppNameColorForAttributedString:(id)a0;
- (void)_contactChangeDidOccur:(id)a0;
- (void)_handleAttributionChanges;
- (void)_fetchContactWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_handleContactFetchCompletion:(id)a0 error:(id)a1 oldSyndicationSenderDisplayName:(id)a2 oldSyndicationSharedWithTitle:(id)a3 oldImageData:(id)a4;

@end
