@class NBComplicationLibraryItem, NSHashTable, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface NBComplicationLibraryManager : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NBComplicationLibraryItem *recentAudiobook;
@property (retain, nonatomic) NSDate *lastFetchedDate;

+ (id)sharedManager;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_notifyObserversWithLibraryItem:(id)a0;
- (void)checkForUpdates:(BOOL)a0;
- (void)q_coalescedCheckForUpdates;
- (void)q_updateMediaItem;

@end
