@class NSString, NSUUID, AFAssertionContext, NSXPCConnection, NSObject, AFTwoArgumentSafetyBlock;
@protocol OS_dispatch_queue;

@interface AFAudioSessionAssertionConnection : NSObject <AFInvalidating, AFRelinquishableAssertion> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    AFTwoArgumentSafetyBlock *_relinquishmentHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) AFAssertionContext *context;

- (id)_xpcConnection;
- (void).cxx_destruct;
- (void)_acquireWithContext:(id)a0;
- (void)_finalizeWithContext:(id)a0 error:(id)a1;
- (void)_relinquishWithContext:(id)a0 error:(id)a1 options:(unsigned long long)a2;
- (void)_clearXPCConnection;
- (void)handleXPCConnectionInterrupted;
- (void)handleXPCConnectionInvalidated;
- (void)dealloc;
- (id)initWithContext:(id)a0 relinquishmentHandler:(id /* block */)a1;
- (void)relinquishWithContext:(id)a0 options:(unsigned long long)a1;
- (void)relinquishWithError:(id)a0 options:(unsigned long long)a1;
- (void)invalidate;

@end
