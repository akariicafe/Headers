@class NSUUID, NSSet, NSData, NSString, ARPointCloud;

@interface ARReferenceObject : NSObject <NSSecureCoding> {
    NSSet *_keyframes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSData *trackingData;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } referenceOriginTransform;
@property (readonly, nonatomic) NSSet *keyframes;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ center;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ extent;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ scale;
@property (readonly, nonatomic) NSString *resourceGroupName;
@property (readonly, nonatomic) ARPointCloud *rawFeaturePoints;

+ (id)referenceObjectsInGroupNamed:(id)a0 catalogName:(id)a1 bundle:(id)a2;
+ (id)referenceObjectsInGroupNamed:(id)a0 catalog:(id)a1;
+ (id)referenceObjectsInGroupNamed:(id)a0 bundle:(id)a1;
+ (id)referenceObjectsInGroupNamed:(id)a0 catalogURL:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)setResourceGroupName:(id)a0;
- (id)initWithTrackingData:(id)a0 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithArchive:(id)a0 name:(id)a1 error:(id *)a2;
- (id)writeToArchiveWithPreviewImage:(id)a0 error:(id *)a1;
- (id)initWithArchiveData:(id)a0 name:(id)a1 error:(id *)a2;
- (id)initWithArchiveURL:(id)a0 error:(id *)a1;
- (BOOL)exportObjectToURL:(id)a0 previewImage:(id)a1 error:(id *)a2;
- (id)exportObjectToMemoryWithPreviewImage:(id)a0 error:(id *)a1;
- (id)referenceObjectByApplyingTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (id)referenceObjectByMergingObject:(id)a0 error:(id *)a1;

@end
