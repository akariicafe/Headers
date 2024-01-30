@class NSArray, AVTUIEnvironment, AVTAvatarRecordDataSource;
@protocol AVTAvatarStore, AVTAvatarListItem;

@interface AVTAvatarPickerDataSource : NSObject

@property (retain, nonatomic) NSArray *items;
@property (nonatomic) BOOL allowAddItem;
@property (retain, nonatomic) id<AVTAvatarListItem> addItem;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) id<AVTAvatarStore> store;
@property (readonly, nonatomic) AVTAvatarRecordDataSource *recordDataSource;

- (long long)numberOfItems;
- (id)itemAtIndex:(long long)a0;
- (void).cxx_destruct;
- (BOOL)canCreateMemoji;
- (long long)indexOfAddItem;
- (id)initWithRecordDataSource:(id)a0 environment:(id)a1 allowAddItem:(BOOL)a2;
- (BOOL)isItemAtIndexAddItem:(long long)a0;
- (void)reloadModel;

@end
