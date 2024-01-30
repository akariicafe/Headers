@class NSNumber, HDDatabaseValueCache, HDProfile;

@interface HDDeviceManager : NSObject {
    HDProfile *_profile;
}

@property (retain, nonatomic) HDDatabaseValueCache *devicesByPersistentID;
@property (retain, nonatomic) HDDatabaseValueCache *deviceEntitiesByDevice;
@property (copy) NSNumber *noneDeviceID;

- (id)initWithProfile:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)allDevicesWithError:(id *)a0;
- (id)deviceEntitiesForDevice:(id)a0 error:(id *)a1;
- (id)deviceEntitiesWithProperty:(id)a0 matchingValues:(id)a1 error:(id *)a2;
- (id)currentDeviceEntityWithError:(id *)a0;
- (id)devicesWithProperty:(id)a0 matchingValues:(id)a1 error:(id *)a2;
- (id)deviceEntityForDevice:(id)a0 error:(id *)a1;
- (id)deviceEntityForNoDeviceWithError:(id *)a0;
- (id)deviceForPersistentID:(id)a0 error:(id *)a1;
- (id)_noneDevice;

@end
