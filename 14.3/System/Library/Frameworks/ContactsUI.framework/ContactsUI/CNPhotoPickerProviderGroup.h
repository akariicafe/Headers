@class NSArray, NSMutableDictionary, NSString;
@protocol CNPhotoPickerProviderGroupDelegate, CNScheduler;

@interface CNPhotoPickerProviderGroup : NSObject <CNPhotoPickerProviderItemDelegate>

@property (retain, nonatomic) NSArray *providers;
@property (retain, nonatomic) NSArray *displayItems;
@property (retain, nonatomic) NSArray *addedItems;
@property (retain, nonatomic) NSArray *removedItems;
@property (retain, nonatomic) NSMutableDictionary *itemsGroupedByProvider;
@property (retain, nonatomic) NSArray *availablePaddingItems;
@property (retain, nonatomic) NSArray *paddingItems;
@property (readonly, nonatomic) id<CNScheduler> workQueue;
@property (readonly, nonatomic) id<CNScheduler> providerItemRenderingQueue;
@property (readonly, nonatomic) id<CNScheduler> callbackQueue;
@property (readonly, nonatomic) long long groupType;
@property (readonly, nonatomic) BOOL allowAddItem;
@property (readonly, nonatomic) BOOL showCircleMask;
@property (weak, nonatomic) id<CNPhotoPickerProviderGroupDelegate> delegate;
@property (nonatomic) unsigned long long itemsPerRow;
@property (retain, nonatomic) NSArray *addItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)injectedItemsGroupWithEnvironment:(id)a0;
+ (id)suggestionsGroupWithProviders:(id)a0 environment:(id)a1 allowAddItem:(BOOL)a2;
+ (id)animojiGroupWithProviders:(id)a0 environment:(id)a1 allowAddItem:(BOOL)a2;
+ (id)emojiGroupWithProviders:(id)a0 environment:(id)a1 allowAddItem:(BOOL)a2;
+ (id)addItemsGroupWithProviders:(id)a0 environment:(id)a1;

- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)providerItemDidUpdate:(id)a0;
- (id)initWithProviders:(id)a0 groupType:(long long)a1 environment:(id)a2 allowAddItem:(BOOL)a3;
- (void)loadProvidersItemsForSize:(struct CGSize { double x0; double x1; })a0 itemsPerRow:(double)a1 scale:(double)a2 RTL:(BOOL)a3;
- (id)itemsForProviderIdentifier:(id)a0;
- (id)suggestionsProviderPrecedingFacesProvider;
- (void)reloadDisplayItemsNotifyDelegate:(BOOL)a0;
- (void)prepareDisplayItems:(id)a0;
- (id)providerItemAtIndex:(long long)a0;
- (long long)addProviderItem:(id)a0;
- (long long)removeProviderItem:(id)a0;
- (void)removeAllAddedProviderItems;
- (BOOL)hasAddedProviderItems;

@end
