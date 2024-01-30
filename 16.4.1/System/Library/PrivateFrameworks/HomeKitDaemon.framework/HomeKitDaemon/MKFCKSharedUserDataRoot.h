@class NSUUID, NSSet, NSString;

@interface MKFCKSharedUserDataRoot : MKFCKSharedUserData <HMDCoreDataCloudTransformable>

@property (nonatomic) BOOL activityNotificationsEnabledForPersonalRequests;
@property (nonatomic) BOOL allowExplicitContent;
@property (nonatomic) BOOL allowiTunesAccount;
@property (nonatomic) BOOL dolbyAtmosEnabled;
@property (nonatomic) BOOL losslessMusicEnabled;
@property (copy, nonatomic) NSUUID *photosPersonDataZoneUUID;
@property (nonatomic) BOOL playbackInfluencesEnabled;
@property (nonatomic) BOOL sharePhotosFaceClassifications;
@property (nonatomic) BOOL siriIdentifyVoiceEnabled;
@property (retain, nonatomic) NSSet *accessorySettings;
@property (retain, nonatomic) NSSet *personsFromPhotos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)exportUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (id)fetchRequest;
+ (id)rootKeyPath;
+ (BOOL)exportInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (BOOL)exportDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)importUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)importInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (BOOL)importDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)_importInsertOrUpdateWithObjectID:(id)a0 context:(id)a1;
+ (id)createWithHomeModelID:(id)a0 persistentStore:(id)a1 context:(id)a2;

- (BOOL)_importSharedUserSettingsIntoLocalModel:(id)a0 context:(id)a1;
- (id)fetchEquivalentModels:(id *)a0;
- (BOOL)importAccessorySettingsIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)importIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)importIntoLocalModelWithContext:(id)a0;
- (BOOL)importPersonsIntoLocalModel:(id)a0 context:(id)a1;

@end
