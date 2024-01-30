@class NSArray, NSString, HMCameraProfile;
@protocol HFHomeKitObject;

@interface HFCameraItem : HFAccessoryProfileItem <HFCompoundItemProtocol>

@property (readonly, nonatomic) HMCameraProfile *profile;
@property (readonly, nonatomic) BOOL isCompoundItem;
@property (readonly, nonatomic) unsigned long long numberOfCompoundItems;
@property (readonly, nonatomic) id<HFHomeKitObject> primaryHomeKitObject;
@property (readonly, nonatomic) NSArray *allHomeKitObjects;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)cameraContainsMotionServiceItem:(id)a0;
+ (BOOL)shouldReportNotificationsAsDisabledForProfile:(id)a0;
+ (void)getErrorDescription:(out id *)a0 detailedErrorDescription:(out id *)a1 forCameraStreamError:(id)a2;
+ (BOOL)shouldIgnoreStreamErrorForCameraSettings:(id)a0;

- (id)_subclass_updateWithOptions:(id)a0;

@end
