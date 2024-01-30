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

+ (id)predictedURLForVolumeName:(id)a0;
+ (id)entityName;
+ (id)volumeForURL:(id)a0 context:(id)a1;
+ (id)volumeForObjectUUID:(id)a0 context:(id)a1;
+ (id)volumeForVolumeUUID:(id)a0 context:(id)a1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;
- (id)payloadForChangedKeys:(id)a0;
- (void)awakeFromInsert;
- (void).cxx_destruct;
- (void)_registerWithVolumeManager;
- (void)_unregisterWithVolumeManager;
- (void)didTurnIntoFault;
- (id)predictedURL;
- (void)awakeFromFetch;
- (BOOL)supportsCloudUpload;
- (void)unregisterWithVolumeManager;
- (void)willTurnIntoFault;

@end
