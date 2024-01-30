@class HMIFaceCrop;
@protocol HMIHomePersonManagerDataSource;

@interface HMIStoreFaceCropOperation : HMFOperation

@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;
@property (readonly) HMIFaceCrop *faceCrop;

+ (id)logCategory;

- (void)main;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 faceCrop:(id)a1;

@end
