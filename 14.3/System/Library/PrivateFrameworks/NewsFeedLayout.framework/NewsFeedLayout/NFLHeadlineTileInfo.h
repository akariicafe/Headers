@class NSString, NSArray;
@protocol FCHeadlineProviding;

@interface NFLHeadlineTileInfo : NSObject <NFLFeedTileInfo>

@property (copy, nonatomic) id<FCHeadlineProviding> headline;
@property (copy, nonatomic) NSString *namespacedIdentifier;
@property (readonly, copy, nonatomic) NSString *groupIdentifier;
@property (readonly, copy, nonatomic) NSString *bookmarkableIdentifier;
@property (readonly, nonatomic, getter=isAggregated) BOOL aggregated;
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

+ (id)identifierWithBookmarkableIdentifier:(id)a0 groupIdentifier:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHeadline:(id)a0 groupIdentifier:(id)a1 aggregated:(BOOL)a2;
- (id)initWithHeadline:(id)a0 groupIdentifier:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)updatedTileInfoWithNewHeadline:(id)a0;

@end
