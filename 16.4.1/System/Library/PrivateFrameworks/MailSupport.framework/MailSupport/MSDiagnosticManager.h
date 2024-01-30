@class AWDServerConnection, NSString, NSObject;
@protocol OS_os_log;

@interface MSDiagnosticManager : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) AWDServerConnection *awdServerConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)submitComposeAttachmentReport:(id)a0;
- (void)submitFetchMetricsReport:(id)a0;
- (void)submitMessageLoadingReport:(id)a0;
- (void)submitSearchSessionWithSearchEngagement:(id)a0 numberOfMessagesLeftToIndex:(unsigned long long)a1 percentOfMessagesIndexed:(unsigned long long)a2 emailProvider:(int)a3;
- (BOOL)submitWithIdentifier:(unsigned int)a0 metricGenerator:(id /* block */)a1;

@end
