@class NSData, NSUUID, HMBModelReference;

@interface HMDFaceprintModel : HMBModel

@property (copy) NSData *data;
@property (copy) NSUUID *modelUUID;
@property (retain) HMBModelReference *faceCrop;

+ (id)hmbProperties;
+ (BOOL)hmbExcludeFromCloudStorage;

- (id)initWithFaceprint:(id)a0;
- (id)createFaceprint;

@end
