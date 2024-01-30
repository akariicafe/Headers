@class NSUUID, NSString, HMDBulletinBoard, HMFMessageDispatcher, HMDDevice, HMDBulletinBoardNotification, NSObject, HMDAppleMediaAccessory, HMDHome;
@protocol OS_dispatch_queue, HMELastEventStoreReadHandle, HMEEventForwarder;

@interface HMDAudioAnalysisEventSubscriberContext : NSObject <HMDAudioAnalysisEventSubscriberContext>

@property (readonly, weak) HMDAppleMediaAccessory *accessory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDDevice *device;
@property (readonly) HMFMessageDispatcher *dispatcher;
@property (readonly) HMDBulletinBoardNotification *audioAnalysisEventNotification;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSUUID *uuid;
@property (readonly, copy) NSUUID *spiClientIdentifier;
@property (readonly, copy) NSString *roomName;
@property (readonly, weak) HMDHome *home;
@property (readonly) HMDBulletinBoard *bulletinBoard;
@property (readonly, getter=isCurrentAccessory) BOOL currentAccessory;
@property (readonly, weak) id<HMELastEventStoreReadHandle> eventStoreReadHandle;
@property (readonly, weak) id<HMEEventForwarder> eventForwarder;
@property (readonly) BOOL dropInEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)forwardEvent:(id)a0 topic:(id)a1 completion:(id /* block */)a2;
- (void)submitLogEvent:(id)a0;
- (void).cxx_destruct;
- (void)submitLogEvent:(id)a0 error:(id)a1;
- (id)initWithAccessory:(id)a0 queue:(id)a1;

@end
