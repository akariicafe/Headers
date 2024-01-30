@class NSObject;
@protocol OS_dispatch_queue;

@interface PXMemoriesSeenHelper : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)defaultHelper;

- (id)init;
- (void).cxx_destruct;
- (void)clearAnyPendingNotificationsFromMemories:(id)a0 inLibrary:(id)a1;
- (void)clearAnyPendingStateFromMemories:(id)a0 inLibrary:(id)a1;
- (void)_clearPendingNotificationForMemory:(id)a0 inLibrary:(id)a1;

@end
