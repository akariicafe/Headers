@class NSMutableDictionary, NSArray, NSURLSessionConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface ADNSURLSessionDemultiplexerManager : NSObject

@property (retain) NSMutableDictionary *sessionDemultiplexerForIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *demuxManagerQueue;
@property (retain, nonatomic) NSURLSessionConfiguration *proxySessionConfigurationLegacy;
@property (retain, nonatomic) NSURLSessionConfiguration *proxySessionConfigurationConnect;
@property (copy) NSArray *protocolClasses;

+ (id)sharedManager;

- (id)sessionDemultiplexerForAdByIdentifier:(id)a0 maximumRequestCount:(long long)a1 proxyType:(long long)a2;
- (void)contentProxyURLConnectDidChange;
- (id)init;
- (void).cxx_destruct;
- (void)contentProxyURLDidChange;
- (void)proxyTypeDidChange;
- (void)unregisterSessionDemultiplexerWithIdentifier:(id)a0;
- (id)sessionConfigurationForProxyType:(long long)a0;
- (void)configVersionDidChange;
- (long long)pretapRequestCountForIdentifier:(id)a0;

@end
