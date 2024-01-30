@class NSString, FPDRTCReportingSessionManager;

@interface FPDRTCReportingSession : NSObject {
    NSString *_providerID;
    FPDRTCReportingSessionManager *_backingManager;
}

- (void)flushMessagesWithCompletion:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProviderID:(id)a0 manager:(id)a1;
- (void)postReportWithCategory:(unsigned long long)a0 type:(unsigned long long)a1 payload:(id)a2 completion:(id /* block */)a3;
- (BOOL)flushMessagesSynchronouslyWithError:(id *)a0;

@end
