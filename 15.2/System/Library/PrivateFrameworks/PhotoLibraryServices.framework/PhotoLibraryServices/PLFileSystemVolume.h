@class NSString, NSURL, NSSet;

@interface PLFileSystemVolume : PLManagedObject {
    NSURL *_url;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *volumeUuidString;
@property (copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isOffline;
@property (retain, nonatomic) NSSet *resources;

+ (id)entityName;
+ (id)volumeForURL:(id)a0 context:(id)a1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)volumeForVolumeUUID:(id)a0 context:(id)a1;
+ (id)predictedURLForVolumeName:(id)a0;
+ (id)volumeForObjectUUID:(id)a0 context:(id)a1;

- (id)payloadID;
- (void)willTurnIntoFault;
- (void)_unregisterWithVolumeManager;
- (void)awakeFromFetch;
- (id)payloadForChangedKeys:(id)a0;
- (void)awakeFromInsert;
- (void)unregisterWithVolumeManager;
- (void)_registerWithVolumeManager;
- (id)predictedURL;
- (void).cxx_destruct;
- (BOOL)supportsCloudUpload;
- (id)payloadIDForTombstone:(id)a0;
- (void)didTurnIntoFault;

@end
