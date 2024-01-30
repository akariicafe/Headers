@class NSString, WiFiAwarePublishConfiguration, NSXPCConnection, NSObject, NSNumber;
@protocol OS_dispatch_queue, WiFiAwarePublisherDelegate, WiFiAwarePublisherXPC;

@interface WiFiAwarePublisher : NSObject <WiFiAwarePublisherXPCDelegate> {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_publishID;
    id<WiFiAwarePublisherXPC> _publisherProxy;
}

@property (weak, nonatomic) id<WiFiAwarePublisherDelegate> delegate;
@property (readonly, nonatomic) WiFiAwarePublishConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetState;
- (void)terminateDataSession:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateLinkStatus:(long long)a0 forDataSession:(id)a1;
- (void)reportIssue:(id)a0 forDataSession:(id)a1;
- (void)generateStatisticsReportForDataSession:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendMessage:(id)a0 toPeerAddress:(id)a1 withInstanceID:(unsigned char)a2 completionHandler:(id /* block */)a3;
- (void)start;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (void)dealloc;
- (void)stop;
- (void)handleError;
- (void)publishStartedWithInstanceID:(unsigned char)a0;
- (void)publishFailedToStartWithError:(long long)a0;
- (void)publishTerminatedWithReason:(long long)a0;
- (void)publishReceivedMessage:(id)a0 fromSubscriberID:(unsigned char)a1 subscriberAddress:(id)a2;
- (void)publishDataConfirmedForHandle:(id)a0 localInterfaceIndex:(unsigned int)a1 serviceSpecificInfo:(id)a2;
- (void)publishDataTerminatedForHandle:(id)a0 reason:(long long)a1;
- (void)updateDatapathServiceSpecificInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateServiceSpecificInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)startPublishSync;

@end
