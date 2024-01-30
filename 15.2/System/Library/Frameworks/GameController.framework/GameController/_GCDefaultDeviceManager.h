@class NSString, NSMutableDictionary, NSMutableSet, NSNumber, NSObject;
@protocol GCLogicalDeviceRegistry, GCPhysicalDeviceRegistry, OS_dispatch_queue, _GCDefaultDeviceManagerDelegate, NSCopying, NSSecureCoding, _GCDeviceMatchingFilter, NSObject;

@interface _GCDefaultDeviceManager : NSObject <_GCPhysicalDeviceManager, _GCLogicalDeviceManager> {
    NSNumber *_probeScore;
    id<_GCDeviceMatchingFilter> _matchingFilter;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_claimedServices;
    NSMutableDictionary *_physicalDevices;
}

@property (weak) id<GCPhysicalDeviceRegistry, GCLogicalDeviceRegistry> deviceRegistry;
@property (weak, nonatomic) id<_GCDefaultDeviceManagerDelegate> delegate;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_onqueue_checkAndDisconnectDuplicateDevice:(id)a0;
- (id)matchHIDDevice:(id)a0;
- (BOOL)acceptFilterConnection:(id)a0 forHIDDevice:(id)a1;
- (id)makeDeviceWithConfiguration:(id)a0 dependencies:(id)a1;
- (void).cxx_destruct;
- (void)_onqueue_relinquishHIDDevice:(id)a0;
- (void)relinquishHIDDevice:(id)a0;
- (id)initWithIdentifier:(id)a0 matchingFilter:(id)a1 probeScore:(id)a2;
- (void)claimHIDDevice:(id)a0;
- (void)_onqueue_registerDefaultConfigurationForDevice:(id)a0;
- (BOOL)acceptDriverConnection:(id)a0 forHIDDevice:(id)a1;

@end
