@class NSUUID, NSString, NSArray, NSSet, HMBulletinBoardNotification, NSObject, _HMContext, HMFUnfairLock;
@protocol OS_dispatch_queue;

@interface HMBulletinBoardNotificationServiceGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (retain, nonatomic) NSSet *cameraProfileUUIDs;
@property (retain, nonatomic) NSSet *associatedServiceUUIDs;
@property (retain, nonatomic) NSArray *cameraProfiles;
@property (retain, nonatomic) NSArray *associatedServices;
@property (readonly, copy, nonatomic) NSUUID *targetUUID;
@property (readonly, copy, nonatomic) NSString *logID;
@property (readonly, weak, nonatomic) HMBulletinBoardNotification *bulletinBoardNotification;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_unconfigure;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigureContext;
- (void)_registerNotificationHandlers;
- (void)__configureWithContext:(id)a0;
- (void)_handleBulletinBoardNotificationServiceGroupUpdateNotification:(id)a0;
- (void)handleConfigureNotification:(id)a0;
- (void)_findObjects;
- (void)_requestServiceGroup;
- (void)_callServiceGroupUpdate;

@end
