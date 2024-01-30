@class NSMutableDictionary, NSString, NSArray, NSURL, UIImage, SKUIItemOffer, SKUIStoreIdentifier;
@protocol SKUIArtworkProviding;

@interface SKUIItem : NSObject <SKUICacheCoding, SSMetricsEventFieldProvider> {
    NSString *_editorialBage;
    NSString *_feedUrlString;
}

@property (readonly, nonatomic) NSString *_downloadKind;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } ageBandRange;
@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSURL *largestArtworkURL;
@property (readonly, nonatomic) id<SKUIArtworkProviding> artworksProvider;
@property (readonly, nonatomic) UIImage *artworkImage;
@property (readonly, nonatomic) NSArray *childItemIdentifiers;
@property (readonly, nonatomic) NSArray *loadedChildItems;
@property (readonly, nonatomic) long long numberOfChildItems;
@property (readonly, nonatomic) unsigned long long deviceFamilies;
@property (readonly, nonatomic, getter=hasPrerenderedArtwork) BOOL prerenderedArtwork;
@property (readonly, nonatomic) NSString *categoryName;
@property (readonly, nonatomic) NSString *collectionName;
@property (readonly, nonatomic) NSString *editorialBadge;
@property (readonly, nonatomic) long long itemIdentifier;
@property (readonly, nonatomic) long long itemKind;
@property (readonly, nonatomic) NSString *itemKindString;
@property (readonly, nonatomic) long long numberOfUserRatings;
@property (readonly, nonatomic) long long parentalControlsRank;
@property (readonly, nonatomic) SKUIItemOffer *primaryItemOffer;
@property (readonly, nonatomic) NSString *productPageURLString;
@property (readonly, nonatomic) NSArray *requiredCapabilities;
@property (copy, nonatomic) SKUIStoreIdentifier *storeIdentifier;
@property (readonly, nonatomic) float userRating;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long versionIdentifier;
@property (readonly, nonatomic) NSString *versionString;
@property (readonly, nonatomic) NSArray *videos;
@property (readonly, nonatomic) BOOL hasInAppPurchases;
@property (readonly, nonatomic) BOOL hasMessagesExtension;
@property (readonly, nonatomic) BOOL isHiddenFromSpringBoard;
@property (readonly, nonatomic) BOOL gameControllerSupported;
@property (readonly, nonatomic) BOOL requiresGameController;
@property (readonly, nonatomic, getter=isNewsstandApp) BOOL newsstandApp;
@property (readonly, nonatomic) long long newsstandBindingEdge;
@property (readonly, nonatomic) long long newsstandBindingType;
@property (readonly, nonatomic) id<SKUIArtworkProviding> newsstandArtworks;
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setItemIdentifier:(long long)a0;
- (id)valueForMetricsField:(id)a0;
- (void)setItemKind:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)lookupDictionary;
- (id)initWithLookupDictionary:(id)a0;
- (void)setTitle:(id)a0;
- (id)initWithCacheRepresentation:(id)a0;
- (id)artworkURLForSize:(long long)a0;
- (id)initContainerItemWithItem:(id)a0;
- (id)childItemForIdentifier:(id)a0;
- (void)addItemOfferParameterWithName:(id)a0 value:(id)a1;
- (void)_setHasInAppPurchases:(BOOL)a0;

@end
