@class NSDate, NSString, NSArray, PHAsset, NSSet, NSMutableSet, NSDateComponents, NSMutableOrderedSet;
@protocol PGHighlightItem;

@interface PGHighlightItemList : NSObject <PGHighlightItem>

@property (retain, nonatomic) NSMutableOrderedSet *internalHighlightItems;
@property (readonly, nonatomic) NSMutableSet *internalAddedHighlightItems;
@property (readonly, nonatomic) NSMutableSet *internalRemovedHighlightItems;
@property (retain, nonatomic) id modelObject;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;
@property (readonly, nonatomic) NSDateComponents *localDateComponents;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSArray *sortedChildHighlightItems;
@property (readonly, copy, nonatomic) NSArray *sortedHighlightItemModelObjects;
@property (readonly, nonatomic) BOOL isNewList;
@property (readonly, nonatomic) BOOL isCandidateForReuse;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, copy, nonatomic) NSSet *addedHighlightItems;
@property (readonly, copy, nonatomic) NSSet *removedHighlightItems;
@property (readonly, nonatomic) id<PGHighlightItem> parentHighlightItem;
@property (copy, nonatomic) NSString *dateDescription;
@property (copy, nonatomic) NSString *smartDescription;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (retain, nonatomic) NSArray *extendedCuratedAssets;
@property (nonatomic) double promotionScore;
@property (nonatomic) unsigned short visibilityState;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long numberOfAssetsInExtended;
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) unsigned short kind;
@property (readonly, nonatomic) unsigned short enrichmentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timeSortDescriptors;
+ (void)updateParentHighlightItemLists:(id)a0 withChildHighlightItems:(id)a1;

- (id)initWithParentHighlightItem:(id)a0 childHighlightItems:(id)a1;
- (id)initAsNewList;
- (void)addHighlightItem:(id)a0;
- (void)removeHighlightItem:(id)a0;
- (void).cxx_destruct;
- (void)_updateHighlightItemsOrdering;

@end
