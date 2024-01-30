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

+ (id)logCategory;
+ (id)shortDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigureContext;
- (void)_unconfigure;
- (void)handleRuntimeStateUpdate:(id)a0;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)updatedEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;

@end
