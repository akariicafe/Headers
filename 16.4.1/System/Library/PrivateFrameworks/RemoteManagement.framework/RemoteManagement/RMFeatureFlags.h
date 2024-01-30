@interface RMFeatureFlags : NSObject

@property (class, readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (class, readonly, nonatomic, getter=isDeviceChannelEnabled) BOOL deviceChannelEnabled;
@property (class, readonly, nonatomic, getter=isCreateAccountInSettingsEnabled) BOOL createAccountInSettingsEnabled;
@property (class, readonly, nonatomic, getter=isHTTPConduitEnabled) BOOL useHTTPConduit;
@property (class, readonly, nonatomic, getter=isFileConduitEnabled) BOOL useFileConduit;
@property (class, readonly, nonatomic, getter=isAppleInternal) BOOL appleInternal;
@property (class, readonly, nonatomic, getter=hasBridgeOS) BOOL hasBridgeOS;

@end
