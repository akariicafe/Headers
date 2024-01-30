@class NSString;

@interface HMDEventFlagsPersistentStore : HMFObject <HMDEventFlagsStoring>

@property (readonly, nonatomic) NSString *eventFlagsStorePath;
@property (readonly, nonatomic) NSString *eventFlagsStoreKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)lastSaveTime;
- (void)archiveEventFlagsValues:(id)a0 withDefinedEventFlagPeriods:(id)a1;
- (id)unarchiveEventFlagsValues;
- (id)unarchiveEventFlagsPeriods;
- (id)initWithDataStorePath:(id)a0 dataStoreKey:(id)a1;

@end
