@class NSString, NSData, NSDate;
@protocol PVFaceProtocol;

@interface PVLibraryGraphNode : MANode <PVMomentProtocol, PVFaceProtocol, PVPersonProtocol, PVAssetProtocol>

@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long estimatedAssetCount;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } approximateCoordinate;
@property (readonly, nonatomic) BOOL isCoarse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *personLocalIdentifier;
@property (readonly, nonatomic) double size;
@property (readonly, nonatomic) double centerX;
@property (readonly, nonatomic) double centerY;
@property (readonly, nonatomic) long long clusterSequenceNumber;
@property (readonly, nonatomic) NSData *faceprintData;
@property (nonatomic) long long qualityMeasure;
@property (readonly, nonatomic) unsigned short ageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) unsigned long long faceCount;
@property (readonly, nonatomic) BOOL favorite;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) NSString *anonymizedName;
@property (readonly, nonatomic) long long verifiedType;
@property (nonatomic) BOOL isVerified;
@property (nonatomic) long long manualOrder;
@property (retain, nonatomic) id<PVFaceProtocol> keyFace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *cloudIdentifier;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } locationCoordinate;
@property (readonly, nonatomic) NSData *distanceIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *localIdentifier;

+ (id)dateForTimeInterval:(double)a0;
+ (double)timeIntervalForDate:(id)a0;

- (void)pv_addMergeCandidatePersons:(id)a0;
- (id)personLocalIdentifiers;
- (BOOL)isDirty;
- (unsigned long long)faceCountInFaceGroup;
- (unsigned long long)type;
- (id)dateCreated;

@end
