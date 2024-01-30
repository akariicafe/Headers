@class NSUUID, NSString, NSMutableSet, HMBLocalZoneLocalInput;
@protocol HMDPersonDataSource;

@interface HMDPersonDataBatchChange : HMFObject <HMFLogging>

@property (readonly) HMBLocalZoneLocalInput *localInput;
@property (readonly) NSMutableSet *addedOrUpdatedPersons;
@property (readonly) NSMutableSet *removedPersonsUUIDs;
@property (readonly, copy) NSUUID *UUID;
@property (weak) id<HMDPersonDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)commit;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (void)addOrUpdateFaceCrop:(id)a0;
- (void)addOrUpdatePerson:(id)a0;
- (id)initWithLocalInput:(id)a0;
- (void)removeFaceCropWithUUID:(id)a0;
- (void)removePersonWithUUID:(id)a0;

@end
