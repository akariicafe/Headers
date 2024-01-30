@class PHObjectPlaceholder, NSString, PHFaceprint, NSManagedObjectID;

@interface PHFaceChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    PHFaceprint *_faceprint;
    BOOL _didSetFaceprint;
}

@property (nonatomic) BOOL shouldClearFaceCropGenerationState;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedFace;
@property (nonatomic) double size;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) long long sourceWidth;
@property (nonatomic) long long sourceHeight;
@property (nonatomic) double leftEyeX;
@property (nonatomic) double leftEyeY;
@property (nonatomic) double rightEyeX;
@property (nonatomic) double rightEyeY;
@property (nonatomic) double mouthX;
@property (nonatomic) double mouthY;
@property (nonatomic) double roll;
@property (nonatomic) double yaw;
@property (nonatomic) BOOL isInVIPModel;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isInTrash) BOOL inTrash;
@property (nonatomic) BOOL manual;
@property (nonatomic) BOOL hasSmile;
@property (nonatomic) double blurScore;
@property (nonatomic, getter=isLeftEyeClosed) BOOL leftEyeClosed;
@property (nonatomic, getter=isRightEyeClosed) BOOL rightEyeClosed;
@property (copy, nonatomic) id adjustmentVersion;
@property (nonatomic) long long nameSource;
@property (nonatomic) long long faceAlgorithmVersion;
@property (nonatomic) double poseYaw;
@property (retain, nonatomic) PHFaceprint *faceprint;
@property (nonatomic) long long clusterSequenceNumber;
@property (nonatomic) long long qualityMeasure;
@property (nonatomic) double quality;
@property (nonatomic) unsigned short ageType;
@property (nonatomic) unsigned short genderType;
@property (nonatomic) unsigned short sexType;
@property (nonatomic) unsigned short eyesState;
@property (nonatomic) unsigned short smileType;
@property (nonatomic) unsigned short facialHairType;
@property (nonatomic) unsigned short hairColorType;
@property (nonatomic) unsigned short baldType;
@property (nonatomic) unsigned short glassesType;
@property (nonatomic) unsigned short eyeMakeupType;
@property (nonatomic) unsigned short lipMakeupType;
@property (retain, nonatomic) NSString *groupingIdentifier;
@property (readonly) BOOL isNewRequest;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)deleteFaces:(id)a0;
+ (id)creationRequestForFace;
+ (id)changeRequestForFace:(id)a0;

- (void)encodeToXPCDict:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initForNewObject;

@end
