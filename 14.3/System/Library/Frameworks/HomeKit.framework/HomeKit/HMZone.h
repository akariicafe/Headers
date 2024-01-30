@class NSUUID, NSString, NSArray, HMHome, HMMutableArray, NSObject, _HMContext, HMFUnfairLock;
@protocol OS_dispatch_queue;

@interface HMZone : NSObject <HMFMessageReceiver, NSSecureCoding, HMObjectMerge> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (retain, nonatomic) HMMutableArray *currentRooms;
@property (readonly, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) HMHome *home;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *rooms;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigureContext;
- (void)_addRoom:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleRoomAddedNotification:(id)a0;
- (void)_handleRoomRemovedNotification:(id)a0;
- (void)_handleZoneRenamedNotification:(id)a0;
- (void)addRoom:(id)a0 completionHandler:(id /* block */)a1;
- (void)_unconfigure;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_updateName:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateName:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithName:(id)a0 uuid:(id)a1;
- (void)_registerNotificationHandlers;
- (void)setUuid:(id)a0;
- (id)roomWithUUID:(id)a0;
- (void)_removeRoom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_removeRoom:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeRoom:(id)a0 completionHandler:(id /* block */)a1;

@end
