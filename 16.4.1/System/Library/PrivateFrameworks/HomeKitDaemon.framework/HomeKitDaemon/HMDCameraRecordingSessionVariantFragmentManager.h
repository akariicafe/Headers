@class NSString, NSMutableArray;
@protocol HMDCameraRecordingSessionVariantFragmentManagerDelegate;

@interface HMDCameraRecordingSessionVariantFragmentManager : HMFObject <HMFLogging>

@property (readonly) NSMutableArray *fullFragmentTimeRanges;
@property (readonly) NSMutableArray *variantFragments;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) BOOL expectsVariantFragment;
@property (weak) id<HMDCameraRecordingSessionVariantFragmentManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithLogIdentifier:(id)a0;
- (void)_drainVariantFragmentQueue;
- (void)handleFullFragment:(id)a0;
- (void)handleVariantFragment:(id)a0;

@end
