@class NSMutableArray, NSString, NSMutableDictionary, NSData, NSObject, MKCertificate;
@protocol OS_nw_listener, OS_dispatch_queue, MKListenerDelegate;

@interface MKListener : NSObject {
    NSObject<OS_nw_listener> *_listener;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    long long _lastUsedThreadIndex;
    NSMutableArray *_connectionQueuePool;
    NSMutableDictionary *_connections;
}

@property (copy, nonatomic) NSData *clientCertificateHash;
@property (weak, nonatomic) id<MKListenerDelegate> delegate;
@property (nonatomic) BOOL useTLS;
@property (nonatomic) unsigned long long port;
@property (nonatomic) unsigned long long numberOfThreads;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *service;
@property (retain, nonatomic) MKCertificate *certificate;
@property (retain, nonatomic) MKCertificate *clientCertificate;

- (void)cancel;
- (void).cxx_destruct;
- (void)readData:(id)a0;
- (void)listen;
- (void)connection:(id)a0 DidChangeState:(int)a1 error:(id)a2 queue:(id)a3;
- (void)connection:(id)a0 didReceiveContent:(id)a1 context:(id)a2 completed:(BOOL)a3 queue:(id)a4 error:(id)a5;
- (void)didReceiveSecureOptions:(id)a0;
- (void)didReceiveTCPOptions:(id)a0;
- (void)didReceiveTrust:(id)a0 complete:(id /* block */)a1;
- (void)listenerDidReceiveConnection:(id)a0;
- (void)listenerDidReceiveState:(int)a0 error:(id)a1;
- (void)read:(id)a0 queue:(id)a1;
- (void)sendData:(id)a0 throughConnection:(id)a1 close:(BOOL)a2;

@end
