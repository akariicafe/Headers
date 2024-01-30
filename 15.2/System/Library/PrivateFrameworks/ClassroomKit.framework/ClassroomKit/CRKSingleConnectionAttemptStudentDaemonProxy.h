@class NSString, CATTaskClient, NSError;
@protocol CRKTransportProviding;

@interface CRKSingleConnectionAttemptStudentDaemonProxy : NSObject <CATTaskClientDelegate, CRKRequestPerformingProtocol> {
    id<CRKTransportProviding> mTransportProvider;
    CATTaskClient *mTaskClient;
    NSError *mError;
    BOOL mDidAttemptToConnect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect;
- (void)client:(id)a0 didInterruptWithError:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)failWithError:(id)a0;
- (void)dealloc;
- (id)operationForRequest:(id)a0;
- (id)initWithTransportProvider:(id)a0;
- (void)connectIfNeeded;

@end
