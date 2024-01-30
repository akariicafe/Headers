@class HMDCameraProfile, NSMutableSet;

@interface HMDBulletinBoardCameraNotificationAssociation : HMFObject

@property (readonly, nonatomic) HMDCameraProfile *cameraProfile;
@property (readonly, nonatomic) NSMutableSet *notificationGeneratingServicesWithCamera;

- (void).cxx_destruct;
- (id)description;
- (id)initWithCameraProfile:(id)a0;

@end
