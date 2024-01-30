@class NSError, NSString, NSArray, CATSerialOperationQueue, CATHTTPMessageParser, NSOutputStream, NSInputStream, CATRemoteConnectionSocketOptions, NSMutableArray, NSObject, NSMutableData;
@protocol CATRemoteConnectionDelegate, OS_dispatch_source;

@interface CATRemoteConnection : NSObject <CATHTTPMessageParserDelegate, NSStreamDelegate> {
    CATHTTPMessageParser *mMessageParser;
    long long mState;
    NSMutableArray *mPendingSendContexts;
    NSObject<OS_dispatch_source> *mConnectionTimeoutTimer;
    NSError *mInterruptionError;
    NSMutableData *mReadBuffer;
    NSArray *mTrustedCertificates;
    long long mPeerTrustState;
    CATSerialOperationQueue *mStreamEventQueue;
}

@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (nonatomic) BOOL usesSSL;
@property (nonatomic) unsigned long long bufferSize;
@property (weak, nonatomic) id<CATRemoteConnectionDelegate> delegate;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) struct __SecTrust { } *peerTrust;
@property (nonatomic) double connectionTimeoutInterval;
@property (copy, nonatomic) CATRemoteConnectionSocketOptions *socketOptions;
@property (copy, nonatomic) NSArray *customTrustEvaluationPolicies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createConnectionPairWithConnection:(id *)a0 andConnection:(id *)a1;
+ (void)createConnectionPairWithConnection:(id *)a0 andConnection:(id *)a1 bufferSize:(unsigned long long)a2;

- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (id)initWithNetService:(id)a0;
- (void)open;
- (void)dealloc;
- (void)close;
- (void)delegateDidInterruptWithError:(id)a0;
- (void).cxx_destruct;
- (void)_stream:(id)a0 handleEvent:(unsigned long long)a1;
- (id)initWithInputStream:(id)a0 outputStream:(id)a1;
- (void)delegateDidOpen;
- (void)scheduleStreams;
- (void)sendDidSucceed:(id)a0;
- (int)applyCustomEvaluationPoliciesToTrust:(struct __SecTrust { } *)a0;
- (void)configureStreamSocketOptions;
- (void)connectionDidInterruptWithError:(id)a0;
- (void)connectionDidReceiveData;
- (void)connectionShouldSendData;
- (void)connectionTimedOut;
- (void)delegateDidClose;
- (void)delegateDidFailToSendData:(id)a0 userInfo:(id)a1 error:(id)a2;
- (void)delegateDidFailToSendDataWithStream:(id)a0 userInfo:(id)a1 error:(id)a2;
- (void)delegateDidReceiveData:(id)a0;
- (void)delegateDidReceiveDataRequestWithURL:(id)a0;
- (void)delegateDidReceiveStreamData:(id)a0 moreComing:(BOOL)a1;
- (void)delegateDidSecure;
- (void)delegateDidSendData:(id)a0 userInfo:(id)a1;
- (void)delegateDidSendDataWithStream:(id)a0 userInfo:(id)a1;
- (void)delegateDidWriteDataForContextIfNeeded:(id)a0;
- (void)delegateDidWriteDataFromStream:(id)a0 totalBytesWritten:(unsigned long long)a1 totalBytesExpectedToWrite:(unsigned long long)a2 userInfo:(id)a3;
- (void)delegateWillSecure;
- (void)enqueueSendContext:(id)a0;
- (id)initWithInputStream:(id)a0 outputStream:(id)a1 bufferSize:(unsigned long long)a2;
- (void)messageParser:(id)a0 didParseRequestData:(id)a1;
- (void)messageParser:(id)a0 didParseRequestWithURL:(id)a1;
- (void)messageParser:(id)a0 didParseResponseData:(id)a1 moreComing:(BOOL)a2;
- (void)secureUsingClientIdentity:(struct __SecIdentity { } *)a0 trustedCertificates:(id)a1;
- (BOOL)secureUsingIdentity:(struct __SecIdentity { } *)a0 trustedCertificates:(id)a1 isServer:(BOOL)a2;
- (void)secureUsingServerIdentity:(struct __SecIdentity { } *)a0 trustedCertificates:(id)a1;
- (void)sendData:(id)a0 userInfo:(id)a1;
- (void)sendDataWithStream:(id)a0 length:(unsigned long long)a1 userInfo:(id)a2;
- (void)sendDidFail:(id)a0 withError:(id)a1;
- (void)trustDecisionDidRespondWithDecisionToAllowUntrustedConnection:(BOOL)a0;
- (void)tryEvaluatingPeerTrustWithStream:(id)a0;
- (BOOL)trySendingDataWithContext:(id)a0 error:(id *)a1;
- (void)unscheduleStreams;

@end
