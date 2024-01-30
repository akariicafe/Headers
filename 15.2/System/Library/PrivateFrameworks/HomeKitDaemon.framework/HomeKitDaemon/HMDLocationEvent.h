@class NSString, CLRegion;

@interface HMDLocationEvent : HMDEvent <HMDLocationDelegate, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CLRegion *region;
@property (readonly, copy, nonatomic) CLRegion *uniqueRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)dumpState;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isActive;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_registerForMessages;
- (BOOL)_activate:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)_transactionObjectRemoved:(id)a0 message:(id)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)emptyModelObject;
- (id)createPayload;
- (id)initWithModel:(id)a0 home:(id)a1;
- (void)_handleUpdateRequest:(id)a0;
- (id)analyticsTriggerEventData;
- (void)didEnterRegion:(id)a0;
- (void)didExitRegion:(id)a0;
- (void)fmfStatusUpdateNotification:(id)a0;
- (void)checkFMFStatus:(id)a0;
- (void)_handleRetrieveLocationEventForEventTrigger:(id)a0;
- (void)locationEventOccured;
- (void)_handleLocationEventOccured:(id)a0;
- (void)informLocationEventOccuranceToResident;

@end
