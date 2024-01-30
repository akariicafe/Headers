@class NSString, NSObject, CALNInMemoryTriggeredEventNotificationDataStorage;
@protocol OS_dispatch_queue;

@interface CALNPersistentTriggeredEventNotificationDataStorage : NSObject <CALNTriggeredEventNotificationDataStorage> {
    BOOL _protected;
}

@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) CALNInMemoryTriggeredEventNotificationDataStorage *inMemoryStorage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)persistentStorageWithPath:(id)a0 isProtectedStorage:(BOOL)a1;
+ (id)notificationDataFromPersistentStorageWithPath:(id)a0 error:(id *)a1;

- (id)notificationData;
- (void)removeNotificationDataWithIdentifier:(id)a0;
- (BOOL)_loadDataWithError:(id *)a0;
- (id)initWithPath:(id)a0 isProtectedStorage:(BOOL)a1;
- (void)_removeData;
- (void)_removeNotificationDataWithIdentifier:(id)a0;
- (void)removeNotificationData;
- (void)addNotificationData:(id)a0 withIdentifier:(id)a1;
- (id)notificationDataWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)_saveDataWithError:(id *)a0;
- (void)_addNotificationData:(id)a0 withIdentifier:(id)a1;

@end
