@class NSString, NSUUID, HMDDevice;
@protocol HMDRemoteEventRouterUserAccessControlProvider;

@interface HMDRemoteEventRouterConnection : NSObject <HMEMessageDatagramConnection> {
    BOOL _supportsFragmentMessage;
    NSUUID *_deviceIdentifier;
    HMDDevice *_device;
    id<HMDRemoteEventRouterUserAccessControlProvider> _userAccessControlProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
