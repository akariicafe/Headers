@class NSString;

@interface BlastDoorAPSQuickRelayPluginRequest : NSObject {
    void /* unknown type, empty encoding */ aPSQuickRelayPluginRequest;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *pluginName;
@property (nonatomic, readonly) NSString *pluginConfig;
@property (nonatomic, readonly) BOOL has_pluginStream;
@property (nonatomic, readonly) long long pluginStream;
@property (nonatomic, readonly) BOOL has_pluginDevMode;
@property (nonatomic, readonly) BOOL pluginDevMode;

- (id)init;
- (void).cxx_destruct;

@end
