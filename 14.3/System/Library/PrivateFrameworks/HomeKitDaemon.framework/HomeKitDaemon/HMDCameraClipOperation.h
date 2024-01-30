@class HMBLocalZone, NSString, NSUUID, NSArray, NSDate, HMDCameraRecordingUploadOperationEvent;
@protocol HMDCameraClipOperationDataSource;

@interface HMDCameraClipOperation : HMFOperation <HMFObject, HMFLogging>

@property (readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) double executionDuration;
@property (copy) NSDate *startDate;
@property (copy) NSDate *endDate;
@property (readonly) id<HMDCameraClipOperationDataSource> dataSource;
@property (readonly) NSUUID *clipModelID;
@property (readonly) HMBLocalZone *localZone;
@property (readonly) HMDCameraRecordingUploadOperationEvent *uploadOperationEvent;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)shortDescription;

- (void)finish;
- (void).cxx_destruct;
- (void)main;
- (void)cancelWithError:(id)a0;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1 dataSource:(id)a2;
- (void)_markEndDateAndSubmitUploadOperationEvent;
- (id)updateClipModel:(id)a0 shouldPerformDelegateCallbacks:(BOOL)a1;
- (double)queuedDuration;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1;
- (id)fetchClipModel;
- (id)updateClipModel:(id)a0;

@end
