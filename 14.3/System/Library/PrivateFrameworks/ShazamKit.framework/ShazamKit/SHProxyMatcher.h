@class SHSignature, NSString, SHRemoteStore, SHShazamXPCServiceProxyConnection;
@protocol SHMatcherDelegate;

@interface SHProxyMatcher : NSObject <SHXPCFrameworkProxy, SHMatcher>

@property (retain, nonatomic) SHRemoteStore *store;
@property (retain, nonatomic) SHShazamXPCServiceProxyConnection *proxyConnection;
@property (retain, nonatomic) SHSignature *currentlyMatchingSignature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SHMatcherDelegate> delegate;

- (void).cxx_destruct;
- (void)stop;
- (void)matchSignature:(id)a0;
- (id)initWithRemoteStore:(id)a0;
- (void)matchRequest:(id)a0;
- (void)matcherDidFindMatch:(id)a0;
- (void)matcherDidNotFindMatch:(id)a0;
- (void)matcherDidFail:(id)a0 withError:(id)a1;
- (void)matcherDidFinishMatchingWithOutcome:(long long)a0;
- (id)initWithRemoteStore:(id)a0 proxyConnection:(id)a1;

@end
