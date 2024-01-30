@class HMDevice, NSUUID, _HMContext, NSString, NSArray, HMFUnfairLock, HMHome;
@protocol HMResidentDeviceDelegate;

@interface HMResidentDevice : NSObject <HMFLogging, HMFObject, HMObjectMerge, NSSecureCoding> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (getter=isEnabled) BOOL enabled;
@property unsigned long long status;
@property unsigned long long capabilities;
@property (weak) HMHome *home;
@property (copy, nonatomic) NSUUID *accountIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (weak) id<HMResidentDeviceDelegate> delegate;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly) HMDevice *device;
@property (readonly, copy) NSString *name;
@property (readonly, getter=isCurrentDevice) BOOL currentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_unconfigure;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigureContext;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)updatedEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)handleRuntimeStateUpdate:(id)a0;

@end
