@class NSArray, NSString, NFLHeadlineTileInfo;

@interface NFLAggregateTileInfo : NSObject <NFLFeedTileInfo>

@property (readonly, copy, nonatomic) NSArray *underlyingTileInfos;
@property (readonly, copy, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) long long groupType;
@property (readonly, nonatomic) unsigned long long tileInfoType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL pageable;
@property (readonly, nonatomic, getter=isSelectable) BOOL selectable;
@property (readonly, nonatomic) unsigned long long bookmarkOffsetType;
@property (readonly, nonatomic) NSArray *underlyingFeedElements;
@property (readonly, nonatomic) NFLHeadlineTileInfo *feedTileInfoForBookmarking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)updatedTileInfoWithNewHeadline:(id)a0;
- (id)initWithIdentifier:(id)a0 groupIdentifier:(id)a1 underlyingTileInfos:(id)a2 groupType:(long long)a3;
- (id)underlyingTileInfoForID:(id)a0;
- (id)initWithGroupIdentifier:(id)a0 underlyingTileInfos:(id)a1 groupType:(long long)a2;
- (BOOL)underlyingTileInfosContainsTileInfoForID:(id)a0;

@end
