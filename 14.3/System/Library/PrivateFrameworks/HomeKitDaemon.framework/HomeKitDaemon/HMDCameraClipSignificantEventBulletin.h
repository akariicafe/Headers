@class NSUUID, NSDate, NSURL, HMDService, NSSet, NSString, NSDictionary, HMDCameraProfile, HMDAccessory, HMDHome;

@interface HMDCameraClipSignificantEventBulletin : NSObject

@property (readonly, copy) NSSet *significantEvents;
@property (readonly, copy) NSUUID *previewImageNotificationUUID;
@property (readonly) NSURL *previewImageFilePathURL;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly) HMDCameraProfile *camera;
@property (readonly) HMDHome *home;
@property (readonly) HMDAccessory *accessory;
@property (readonly) HMDService *service;
@property (readonly, copy) NSUUID *clipUUID;
@property (readonly) BOOL shouldShowProvideFeedbackButton;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *body;
@property (readonly, copy) NSString *threadIdentifier;
@property (readonly, copy) NSString *requestIdentifier;

+ (id)localizedMessageForSignificantEvents:(id)a0 cameraName:(id)a1;
+ (id)actionURLForHomeUUID:(id)a0 cameraUUID:(id)a1;
+ (unsigned long long)effectiveReasonForSignificantEvent:(id)a0;

- (void).cxx_destruct;
- (id)initWithSignificantEvents:(id)a0 previewImageNotificationUUID:(id)a1 previewImageFilePathURL:(id)a2 dateOfOccurrence:(id)a3 camera:(id)a4 home:(id)a5 accessory:(id)a6 recordingService:(id)a7 requestIdentifier:(id)a8 clipUUID:(id)a9 shouldShowProvideFeedbackButton:(BOOL)a10;
- (id)initWithSignificantEvents:(id)a0 previewImageNotificationUUID:(id)a1 previewImageFilePathURL:(id)a2 dateOfOccurrence:(id)a3 camera:(id)a4 home:(id)a5 accessory:(id)a6 recordingService:(id)a7 clipUUID:(id)a8 shouldShowProvideFeedbackButton:(BOOL)a9;
- (id)initWithSignificantEvent:(id)a0 previewImageFilePathURL:(id)a1 dateOfOccurrence:(id)a2 camera:(id)a3 home:(id)a4 accessory:(id)a5 recordingService:(id)a6 shouldShowProvideFeedbackButton:(BOOL)a7;

@end
