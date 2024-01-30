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

+ (id)volumeForURL:(id)a0 context:(id)a1;
+ (id)entityName;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)volumeForObjectUUID:(id)a0 context:(id)a1;
+ (id)predictedURLForVolumeName:(id)a0;
+ (id)volumeForVolumeUUID:(id)a0 context:(id)a1;

- (id)payloadID;
- (void)awakeFromFetch;
- (id)payloadForChangedKeys:(id)a0;
- (void)awakeFromInsert;
- (BOOL)supportsCloudUpload;
- (void)_registerWithVolumeManager;
- (void)unregisterWithVolumeManager;
- (void)willTurnIntoFault;
- (id)payloadIDForTombstone:(id)a0;
- (void)didTurnIntoFault;
- (void)_unregisterWithVolumeManager;
- (id)predictedURL;
- (void).cxx_destruct;

@end
