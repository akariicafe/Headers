@class NSString, NSUUID, NSDictionary, HMDMediaSystem, NSSet, NSObject, HMFMessageDispatcher;
@protocol OS_dispatch_queue;

@interface HMDMediaSystemSymptomHandler : HMFObject <NSSecureCoding, HMFLogging>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, weak, nonatomic) HMDMediaSystem *mediaSystem;
@property (copy, nonatomic) NSDictionary *currentSymptoms;
@property (readonly, nonatomic) NSSet *mergedSymptoms;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)_initializePlaceholderSymptomsDict:(id)a0;
- (void)refreshCurrentDeviceSymptoms;
- (void)_refreshCurrentDeviceSymptoms;
- (void)_handleNewDiscoveredSymptoms:(id)a0 forAccessory:(id)a1;
- (void)_updateBackingStoreModelWithNewSymptoms:(id)a0;
- (id)initWithMediaSystem:(id)a0 symptoms:(id)a1;
- (void)configureWithWorkQueue:(id)a0 messageDispatcher:(id)a1;
- (void)handleNewDiscoveredSymptoms:(id)a0 forAccessory:(id)a1;
- (void)handleMediaSystemSymptoms:(id)a0 message:(id)a1;

@end
