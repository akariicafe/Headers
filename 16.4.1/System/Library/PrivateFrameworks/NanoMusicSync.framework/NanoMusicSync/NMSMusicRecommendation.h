@class NSObject, NSOrderedSet, NSString, NSArray, NSDate, MPArtworkCatalog, NSMapTable;
@protocol OS_dispatch_queue;

@interface NMSMusicRecommendation : NSObject <NSCopying> {
    NSMapTable *_itemSectionMap;
    NSDate *_lastModifiedDate;
    MPArtworkCatalog *_artworkCatalog;
    NSObject<OS_dispatch_queue> *_serializerQueue;
}

@property (readonly, nonatomic) NSOrderedSet *items;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) MPArtworkCatalog *artworkCatalog;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) NSArray *storeRecommendationModelObjects;

+ (void)_fillArtworkMutableArray:(id)a0 toCount:(unsigned long long)a1;
+ (id)_missingArtImage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_tiledArtworkRequestForPlaylists:(id)a0 albums:(id)a1;
- (id)initRecentMusicRecommendationWithItems:(id)a0 itemSectionMap:(id)a1;
- (id)initWithIdentifier:(id)a0 title:(id)a1 items:(id)a2 itemSectionMap:(id)a3;
- (BOOL)nms_isRecentMusic;
- (unsigned long long)recommendationSectionTypeForModelObject:(id)a0;
- (id)sectionForItemWithIdentifiers:(id)a0;

@end
