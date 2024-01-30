@class NSString, NSMutableDictionary, NSMutableSet, ACCConnectionInfo;
@protocol PKAccessoryDeviceMonitorDelegate;

@interface PKAccessoryDeviceMonitor : NSObject <ACCConnectionInfoDelegateProtocol> {
    ACCConnectionInfo *_accessoryConnectionInfo;
    NSMutableDictionary *_attachmentDictionary;
    NSMutableSet *_accessoryAttached;
    id<PKAccessoryDeviceMonitorDelegate> _delegate;
    NSString *_accessoryConnectionUUID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accessoryConnectionDetached:(id)a0;
- (void)accessoryEndpointDetached:(id)a0 forConnection:(id)a1;
- (id)initWithDelegate:(id)a0;
- (BOOL)accessoryAttachedForEndpointUUID:(id)a0;
- (void).cxx_destruct;
- (void)accessoryEndpointAttached:(id)a0 transportType:(int)a1 protocol:(int)a2 properties:(id)a3 forConnection:(id)a4;
- (void)accessoryConnectionAttached:(id)a0 type:(int)a1 info:(id)a2 properties:(id)a3;

@end
