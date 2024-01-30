@class NSString, NSPersistentHistoryToken;

@interface MKFCoreDataMetadata : NSManagedObject <HMFLogging>

@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForCloudSharedStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForCloudStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForWorkingStore;
@property (nonatomic) BOOL unique;
@property (retain, nonatomic) NSPersistentHistoryToken *primitiveHistoryTokenForCloudStore;
@property (retain, nonatomic) NSPersistentHistoryToken *primitiveHistoryTokenForCloudSharedStore;
@property (retain, nonatomic) NSPersistentHistoryToken *primitiveHistoryTokenForWorkingStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForCloudStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForCloudSharedStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForWorkingStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)logCategory;

- (void)willSave;

@end
