@class NSString, NSObject;
@protocol HMDCameraBulletinBoard, OS_dispatch_queue, HMDFileManager;

@interface HMDCameraClipUserNotificationCenter : HMFObject <HMFLogging>

@property (readonly) id<HMDCameraBulletinBoard> bulletinBoard;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) id<HMDFileManager> fileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_firstAvailableHeroFrameURLForSignificantEvents:(id)a0 cameraProfile:(id)a1;
- (void)_insertClipSignificantEventBulletin:(id)a0;
- (id)_writeHeroFrameData:(id)a0;
- (id)bulletinForClipSignificantEvent:(id)a0 cameraProfile:(id)a1;
- (id)initWithBulletinBoard:(id)a0 workQueue:(id)a1;
- (id)initWithBulletinBoard:(id)a0 workQueue:(id)a1 fileManager:(id)a2;
- (void)postNotificationForBulletin:(id)a0 significantEvent:(id)a1;
- (void)postNotificationForSignificantEvent:(id)a0 heroFrameData:(id)a1 cameraProfile:(id)a2;
- (void)removeCachedHeroFrameImages;
- (void)removeEventNotificationForClipWithUUID:(id)a0;
- (void)removeEventNotificationsForCameraProfile:(id)a0;

@end
