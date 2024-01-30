@class NSArray, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, AVTAvatarRecordDataSource, AVTUILogger;

@interface AVTStickerTaskScheduler : NSObject <AVTStickerTaskScheduler>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock;
@property (readonly, nonatomic) NSMutableDictionary *stickerPickerTasks;
@property (readonly, nonatomic) NSMutableDictionary *stickerSheetPlaceholderTasks;
@property (readonly, nonatomic) NSMutableDictionary *stickerSheetsTasks;
@property (readonly, nonatomic) id<AVTAvatarRecordDataSource> recordDataSource;
@property (retain) NSArray *allAvatarRecordIdentifiers;
@property (retain) NSString *selectedAvatarRecordIdentifier;
@property (retain) NSArray *sortedVisibleIndexPaths;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)schedulerWithRecordDataSource:(id)a0;

- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0 recordDataSource:(id)a1;
- (void)didCompleteTask:(id)a0;
- (id)nextTaskToRunFromStickerPickerTasks:(id)a0 stickerSheetPlaceholderTasks:(id)a1 stickerSheetsTasks:(id)a2;
- (id)selectedPickerThumbnailFromTasksStorage:(id)a0 selectedAvatarRecordIdentifier:(id)a1;
- (id)selectedSheetPlaceholderFromTasksStorage:(id)a0 selectedAvatarRecordIdentifier:(id)a1;
- (id)nextVisibleSelectedSheetStickerFromTasksStorage:(id)a0 selectedAvatarRecordIdentifier:(id)a1 visibleIndexPaths:(id)a2;
- (id)nextPickerThumbnailFromTasksStorage:(id)a0 allAvatarRecordIdentifiers:(id)a1;
- (void)cancelStickerSheetTasksForAvatarRecordIdentifier:(id)a0;
- (void)setVisibleIndexPaths:(id)a0;
- (void)scheduleStickerTask:(id)a0;
- (id)nextSelectedSheetStickerFromTasksStorage:(id)a0 selectedAvatarRecordIdentifier:(id)a1;
- (id)nextSheetPlaceHolderFromTasksStorage:(id)a0 allAvatarRecordIdentifiers:(id)a1;
- (id)nextSheetStickerFromTasksStorage:(id)a0 allAvatarRecordIdentifiers:(id)a1;
- (void)cancelPickerTask:(id /* block */)a0 avatarRecordIdentifier:(id)a1;
- (void)startTask:(id)a0;
- (void)cancelTask:(id /* block */)a0;
- (void)lowerTaskPriority:(id /* block */)a0;
- (void)cancelAllTasks;
- (void)scheduleTask:(id /* block */)a0;
- (void)performStateWork:(id /* block */)a0;

@end
