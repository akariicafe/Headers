@class NSString, NSData;

@interface BlastDoorAPSQuickRelaySelfAllocToken : NSObject {
    void /* unknown type, empty encoding */ aPSQuickRelaySelfAllocToken;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSData *relayIp;
@property (nonatomic, readonly) NSData *relayIpv6;
@property (nonatomic, readonly) BOOL has_relayPort;
@property (nonatomic, readonly) long long relayPort;
@property (nonatomic, readonly) NSData *relaySessionKey;
@property (nonatomic, readonly) NSData *relaySessionId;
@property (nonatomic, readonly) NSData *relayAccessToken;
@property (nonatomic, readonly) BOOL has_relayProvider;
@property (nonatomic, readonly) long long relayProvider;

- (id)init;
- (void).cxx_destruct;

@end
