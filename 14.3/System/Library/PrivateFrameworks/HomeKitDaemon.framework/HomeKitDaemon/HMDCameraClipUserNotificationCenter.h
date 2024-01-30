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
- (id)initWithBulletinBoard:(id)a0 workQueue:(id)a1;
- (void)postNotificationForClipSignificantEvent:(id)a0 cameraProfile:(id)a1;
- (void)removeEventNotificationForClipWithUUID:(id)a0;
- (id)initWithBulletinBoard:(id)a0 workQueue:(id)a1 fileManager:(id)a2;
- (id)_writeHeroFrameData:(id)a0;
- (void)_postNotificationForClipSignificantEvent:(id)a0 cameraProfile:(id)a1 canFetchHeroFrame:(BOOL)a2;
- (id)_firstAvailableHeroFrameURLForSignificantEvents:(id)a0 cameraProfile:(id)a1;
- (void)_postNotificationForSignificantEvents:(id)a0 cameraProfile:(id)a1 heroFrameURL:(id)a2;
- (void)postNotificationForSignificantEvent:(id)a0 heroFrameData:(id)a1 cameraProfile:(id)a2;

@end
