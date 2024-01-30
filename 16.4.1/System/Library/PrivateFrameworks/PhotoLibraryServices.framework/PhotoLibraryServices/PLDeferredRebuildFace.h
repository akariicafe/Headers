@class NSString;

@interface PLDeferredRebuildFace : PLManagedObject <PLFaceRebuildDescription>

@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic, getter=isManual) BOOL manual;
@property (readonly, nonatomic, getter=isRepresentative) BOOL representative;
@property (readonly, nonatomic) double centerX;
@property (readonly, nonatomic) double centerY;
@property (readonly, nonatomic) double size;
@property (readonly, nonatomic) int nameSource;
@property (readonly, nonatomic) int cloudNameSource;
@property (readonly, nonatomic, getter=isClusterRejected) BOOL clusterRejected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *faceUUID;
@property (copy, nonatomic) NSString *assetCloudGUID;
@property (copy, nonatomic) NSString *assetUUID;
@property (copy, nonatomic) NSString *personUUID;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double size;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL manual;
@property (nonatomic) BOOL representative;
@property (nonatomic) BOOL rejected;
@property (nonatomic) BOOL clusterRejected;
@property (nonatomic) int nameSource;
@property (nonatomic) int cloudNameSource;
@property (nonatomic) int faceAlgorithmVersion;

+ (id)entityName;
+ (id)deferredFacesWithAssetCloudGUID:(id)a0 inManagedObjectContext:(id)a1;

- (id)payloadID;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadIDForTombstone:(id)a0;
- (id)additionalDescription;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;

@end
