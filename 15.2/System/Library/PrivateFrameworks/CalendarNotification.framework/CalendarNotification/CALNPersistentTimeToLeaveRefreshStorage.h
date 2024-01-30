@class NSString, CALNInMemoryTimeToLeaveRefreshStorage, NSObject;
@protocol OS_dispatch_queue;

@interface CALNPersistentTimeToLeaveRefreshStorage : NSObject <CALNTimeToLeaveRefreshStorage>

@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) CALNInMemoryTimeToLeaveRefreshStorage *inMemoryStorage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)persistentStorageWithPath:(id)a0;
+ (id)timeToLeaveRefreshDataFromPersistentStorageWithPath:(id)a0 error:(id *)a1;

- (id)initWithPath:(id)a0;
- (void)_addRefreshDate:(id)a0 withIdentifier:(id)a1;
- (void)removeRefreshDates;
- (void).cxx_destruct;
- (void)_removeRefreshDateWithIdentifier:(id)a0;
- (BOOL)_saveDataWithError:(id *)a0;
- (BOOL)_loadDataWithError:(id *)a0;
- (void)addRefreshDate:(id)a0 withIdentifier:(id)a1;
- (id)refreshDateWithIdentifier:(id)a0;
- (id)refreshDates;
- (void)_removeData;
- (void)removeRefreshDateWithIdentifier:(id)a0;

@end
