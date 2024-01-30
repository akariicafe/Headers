@class NSString, NSMutableArray, NSArray;
@protocol HUCCMosaicOrderable;

@interface HUCCMosaicLayout : NSObject

@property (nonatomic) unsigned long long scenesNeeded;
@property (nonatomic) unsigned long long accessoriesNeeded;
@property (readonly, nonatomic) unsigned long long numberOfFilledItems;
@property (nonatomic) unsigned long long numberOfMisses;
@property (retain, nonatomic) id<HUCCMosaicOrderable> homeItem;
@property (retain, nonatomic) NSMutableArray *scenes;
@property (retain, nonatomic) NSMutableArray *accessories;
@property (retain, nonatomic) NSMutableArray *fillers;
@property (retain, nonatomic) NSString *layoutDescription;
@property (readonly, nonatomic) NSArray *arrangedItems;
@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, nonatomic) unsigned long long layoutType;
@property (readonly, nonatomic) unsigned long long priority;

+ (id)sortDescriptors;
+ (id)allLandscapeLayouts;
+ (id)allPortraitLayouts;
+ (unsigned long long)maxItemsNeededForLandscape;
+ (unsigned long long)maxItemsNeededForPortrait;

- (void)addItem:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLayoutType:(unsigned long long)a0;
- (void)_addFillerItem:(id)a0;
- (void)_addAccessoryItem:(id)a0;
- (void)_addSceneItem:(id)a0;
- (void)_registerPossibleMiss;
- (void)_sizeAllItems;

@end
