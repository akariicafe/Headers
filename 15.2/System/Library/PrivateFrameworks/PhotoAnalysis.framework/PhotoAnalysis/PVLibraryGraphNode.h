@class NSString, NSDictionary, NSData, NSDate;
@protocol PVFaceProtocol;

@interface PVLibraryGraphNode : MANode <PVMomentProtocol, PVFaceProtocol, PVPersonProtocol, PVAssetProtocol> {
    unsigned short _domain;
    float _weight;
    NSString *_label;
    NSDictionary *_properties;
}

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
@property (readonly, nonatomic) double poseYaw;
@property (readonly, nonatomic) long long clusterSequenceNumber;
@property (readonly, nonatomic) NSData *faceprintData;
@property (nonatomic) long long qualityMeasure;
@property (readonly, nonatomic) unsigned short ageType;
@property (readonly, nonatomic) unsigned short poseType;
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

+ (double)timeIntervalForDate:(id)a0;
+ (id)dateForTimeInterval:(double)a0;

- (float)weight;
- (BOOL)isDirty;
- (id)propertyDictionary;
- (id)label;
- (id)properties;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)dateCreated;
- (unsigned long long)type;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)personLocalIdentifiers;
- (unsigned long long)faceCountInFaceGroup;
- (void)pv_addMergeCandidatePersons:(id)a0;

@end
