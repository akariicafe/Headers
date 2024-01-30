@class NSString, NSURL, NSArray, SSItemOffer, NSDate, NSDictionary, SUItemReviewStatistics, SUItemContentRating, SSItemImageCollection, NSNumber, SUItemLink;

@interface SUItem : NSObject <NSCopying> {
    char _isInstalled;
    NSString *_releaseDateString;
    NSDictionary *_tellAFriendDictionary;
    NSDictionary *_tweetDictionary;
}

@property (readonly, nonatomic) NSDictionary *itemDictionary;
@property (readonly, nonatomic) NSString *itemTypeString;
@property (copy, nonatomic) SSItemImageCollection *itemImageCollection;
@property (readonly, nonatomic) NSString *tellAFriendBody;
@property (readonly, nonatomic) NSString *tellAFriendBodyMIMEType;
@property (readonly, nonatomic) NSURL *tellAFriendBodyURL;
@property (readonly, nonatomic) NSString *tellAFriendSubject;
@property (readonly, nonatomic) NSString *tweetInitialText;
@property (readonly, nonatomic) NSURL *tweetURL;
@property (readonly, nonatomic) SSItemOffer *defaultStoreOffer;
@property (copy, nonatomic) NSArray *storeOffers;
@property (readonly, nonatomic) SUItemLink *externalArtistPageLink;
@property (copy, nonatomic) NSArray *itemLinks;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;
@property (nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;
@property (copy, nonatomic) NSString *softwareType;
@property (retain, nonatomic) NSNumber *versionIdentifier;
@property (copy, nonatomic) NSArray *versionOrdering;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *collectionName;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *copyrightString;
@property (copy, nonatomic) NSString *disclaimerString;
@property (copy, nonatomic) NSString *genreName;
@property (nonatomic) long long representedItemCount;
@property (copy, nonatomic) SUItemContentRating *contentRating;
@property (retain, nonatomic) SUItem *containerItem;
@property (copy, nonatomic) NSString *humanReadableDescription;
@property (readonly, nonatomic, getter=isDownloadable) BOOL downloadable;
@property (nonatomic) long long itemDisplayType;
@property (nonatomic) unsigned long long itemIdentifier;
@property (copy, nonatomic) NSString *itemMediaKind;
@property (nonatomic) long long itemType;
@property (retain, nonatomic) NSDate *releaseDate;
@property (copy, nonatomic) SUItemReviewStatistics *reviewStatistics;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *unmodifiedTitle;

- (id)valueForProperty:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)_valueForFirstAvailableKey:(id)a0;
- (void)dealloc;
- (id)copyReleaseDateStringWithStyle:(long long)a0;
- (void)_reloadProperties;
- (id)relatedItemsForRelationType:(id)a0;
- (id)stringValueForProperty:(id)a0;
- (id)itemLinksForType:(long long)a0;
- (BOOL)boolValueForProperty:(id)a0;
- (id)dateValueForProperty:(id)a0;
- (id)firstItemLinkForType:(long long)a0;
- (BOOL)isDisplayable:(id *)a0;
- (void)_reloadDefaultStoreOffer;
- (long long)_linkTargetForTargetString:(id)a0 typeString:(id)a1;
- (long long)_linkTypeForString:(id)a0;
- (id)storeOfferForIdentifier:(id)a0;
- (id)_squishImageForSquishDictionary:(id)a0;
- (id)_newPrimaryItemLink;
- (id)_newItemLinkWithType:(long long)a0 dictionary:(id)a1;
- (id)_newItemLinkWithType:(long long)a0 URLKey:(id)a1 titleKey:(id)a2;
- (void)_reloadStoreOffers;
- (void)_reloadImagesAndLinksFromSquishes:(id)a0;
- (void)_reloadItemImages;
- (void)_reloadItemLinks;
- (long long)integerValueForProperty:(id)a0;

@end
