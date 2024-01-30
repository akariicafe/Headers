@class HMIPersonFaceCrop;
@protocol HMIHomePersonManagerDataSource;

@interface HMIFaceMisclassificationTask : HMITask

@property (readonly) HMIPersonFaceCrop *faceCrop;
@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)main;
- (id)initWithTaskID:(int)a0 dataSource:(id)a1 faceCrop:(id)a2;
- (void)removeNearestFaceprint:(id)a0 withFaceCrops:(id)a1;

@end
