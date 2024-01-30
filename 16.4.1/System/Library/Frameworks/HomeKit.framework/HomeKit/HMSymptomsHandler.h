@class NSObject, NSString, _HMContext, NSHashTable, NSUUID, HMMutableArray, NSSet;
@protocol OS_dispatch_queue, HMSymptomsHandlerDelegate;

@interface HMSymptomsHandler : NSObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMObjectMerge> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *logIdentifier;
@property (retain, nonatomic) _HMContext *context;
@property (readonly, nonatomic) NSHashTable *fixSessions;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) HMMutableArray *currentSymptoms;
@property (copy, setter=setSFDeviceIdentifier:) NSUUID *sfDeviceIdentifier;
@property (readonly, copy) NSSet *symptoms;
@property (weak) id<HMSymptomsHandlerDelegate> delegate;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_unconfigure;
- (void).cxx_destruct;
- (void)_addFixSession:(id)a0;
- (void)__configureWithContext:(id)a0;
- (void)_callFixSessionAvailabilityUpdatedDelegate;
- (void)_callSymptomsUpdatedDelegate:(id)a0;
- (id)_findAndRemoveFixSessionsForSymptom:(id)a0;
- (void)_handleSFDeviceIdentifierUpdated:(id)a0;
- (void)_handleSymptomsUpdated:(id)a0;
- (BOOL)_mergeWithNewObject:(id)a0;
- (void)_registerForMessages;
- (void)_unconfigureContext;
- (id)initWithUUID:(id)a0 logIdentifier:(id)a1;
- (void)initiateFixWithCompletionHandler:(id /* block */)a0;
- (id)newFixSessionForSymptom:(id)a0;

@end
