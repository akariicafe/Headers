@class NSSet;
@protocol HMIPersonManagerDataSource;

@interface HMIStoreFaceprintsOperation : HMFOperation

@property (readonly) id<HMIPersonManagerDataSource> dataSource;
@property (readonly) NSSet *faceprints;

+ (id)logCategory;

- (void)main;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 faceprints:(id)a1;
- (void)mainInsideAutoreleasePool;

@end
