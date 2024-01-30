@class NSString, IDSDevice;

@interface BLTIDSDevice : NSObject <BLTAbstractIDSDevice> {
    IDSDevice *_device;
}

@property (readonly, nonatomic) BOOL isDefaultPairedDevice;
@property (readonly, nonatomic) BOOL isNearby;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isCloudReachable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)initWithIDSDevice:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
