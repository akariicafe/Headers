@class HMIFaceprint;
@protocol HMIHomePersonManagerDataSource;

@interface HMIStoreFaceprintOperation : HMFOperation

@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;
@property (readonly) HMIFaceprint *faceprint;

+ (id)logCategory;

- (void)main;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 faceprint:(id)a1;

@end
