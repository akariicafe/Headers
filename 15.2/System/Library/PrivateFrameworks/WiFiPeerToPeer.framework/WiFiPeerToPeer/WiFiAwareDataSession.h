@class NSData, NSString, WiFiAwareDiscoveryResult, WiFiAwareInternetSharingConfiguration, WiFiMACAddress, NSXPCConnection, NSObject, WiFiAwarePublishDatapathServiceSpecificInfo, NSNumber;
@protocol WiFiAwareDataSessionDelegate, OS_dispatch_queue, WiFiAwareDatapathXPC;

@interface WiFiAwareDataSession : NSObject <WiFiAwareDatapathXPCDelegate> {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_datapathID;
    WiFiMACAddress *_initiatorDataAddress;
    id<WiFiAwareDatapathXPC> _datapathProxy;
}

@property (readonly, nonatomic) WiFiAwareDiscoveryResult *discoveryResult;
@property (readonly, nonatomic) long long serviceType;
@property (readonly, nonatomic) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo;
@property (readonly, nonatomic) NSString *passphrase;
@property (readonly, nonatomic) NSData *pmk;
@property (readonly, nonatomic) NSData *pmkID;
@property (copy, nonatomic) WiFiAwareInternetSharingConfiguration *internetSharingConfiguration;
@property (weak, nonatomic) id<WiFiAwareDataSessionDelegate> delegate;
@property (readonly, nonatomic) WiFiMACAddress *localDataAddress;
@property (readonly, nonatomic) unsigned int localInterfaceIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetState;
- (id)initWithDiscoveryResult:(id)a0 serviceType:(long long)a1 serviceSpecificInfo:(id)a2;
- (void)reportIssue:(id)a0;
- (void)generateStatisticsReportWithCompletionHandler:(id /* block */)a0;
- (void)updateLinkStatus:(long long)a0;
- (void)start;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (void)dealloc;
- (void)stop;
- (id)initWithDiscoveryResult:(id)a0 serviceType:(long long)a1 serviceSpecificInfo:(id)a2 passphrase:(id)a3 pmk:(id)a4 pmkID:(id)a5;
- (void)datapathStartedWithInstanceID:(unsigned char)a0 initiatorDataAddress:(id)a1 localInterfaceIndex:(unsigned int)a2;
- (void)datapathFailedToStartWithError:(long long)a0;
- (void)datapathConfirmedForPeerDataAddress:(id)a0 serviceSpecificInfo:(id)a1;
- (void)datapathReceivedControlDataAddress:(id)a0 serviceSpecificInfo:(id)a1 onInterfaceIndex:(unsigned int)a2;
- (void)datapathTerminatedWithReason:(long long)a0;
- (void)handleError;
- (void)startDatapathSync;
- (id)initWithDiscoveryResult:(id)a0 serviceType:(long long)a1 serviceSpecificInfo:(id)a2 passphrase:(id)a3;
- (id)initWithDiscoveryResult:(id)a0 serviceType:(long long)a1 serviceSpecificInfo:(id)a2 pmk:(id)a3;
- (id)initWithDiscoveryResult:(id)a0 serviceType:(long long)a1 serviceSpecificInfo:(id)a2 pmk:(id)a3 pmkID:(id)a4;

@end
