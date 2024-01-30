@class NSString, NSArray, NFLHeadlineTileInfo;

@interface NFLAdTileInfo : NSObject <NFLFeedTileInfo>

@property (retain, nonatomic) NSString *adUnitIdentifier;
@property (nonatomic) long long adType;
@property (nonatomic) BOOL isDisplayingAd;
@property (nonatomic) BOOL isOnScreen;
@property (nonatomic) BOOL appearedOnScreen;
@property (nonatomic) BOOL appearedWithAd;
@property (readonly, nonatomic) unsigned long long tileInfoType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL pageable;
@property (readonly, nonatomic, getter=isSelectable) BOOL selectable;
@property (readonly, nonatomic) unsigned long long bookmarkOffsetType;
@property (readonly, nonatomic) NSArray *underlyingFeedElements;
@property (readonly, nonatomic) NFLHeadlineTileInfo *feedTileInfoForBookmarking;
@property (readonly, copy, nonatomic) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierPrefix;
+ (id)identifierForAdType:(long long)a0;
+ (long long)adTypeForIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)commonInit;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)updatedTileInfoWithNewHeadline:(id)a0;
- (id)initWithAdType:(long long)a0;

@end
