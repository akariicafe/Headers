@class NSString, NSData;

@interface BlastDoorAPSQuickRelayPluginAllocation : NSObject {
    void /* unknown type, empty encoding */ aPSQuickRelayPluginAllocation;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *pluginName;
@property (nonatomic, readonly) BOOL has_pluginStream;
@property (nonatomic, readonly) long long pluginStream;
@property (nonatomic, readonly) BOOL has_participantId;
@property (nonatomic, readonly) long long participantId;
@property (nonatomic, readonly) NSData *relaySessionKey;
@property (nonatomic, readonly) NSData *relayAccessToken;

- (id)init;
- (void).cxx_destruct;

@end
