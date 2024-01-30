@class NSString, DASessionInternal, NSXPCConnection;

@interface DASession : NSObject <KmlSessionCallbacks, NSSecureCoding> {
    NSXPCConnection *_clientConnection;
    DASessionInternal *_internal;
    BOOL _hasEnded;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)endSession;
- (void)setProxy:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)didEnd:(id)a0;
- (id)getDelegate;
- (id)getRemoteProxy:(id /* block */)a0;
- (void)didStart:(BOOL)a0;
- (void)dispatchOnCallbackQueue:(id /* block */)a0;

@end
