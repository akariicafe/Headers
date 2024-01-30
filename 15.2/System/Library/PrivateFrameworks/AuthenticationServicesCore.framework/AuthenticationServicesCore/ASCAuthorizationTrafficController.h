@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ASCAuthorizationTrafficController : NSObject {
    NSMutableSet *_appsWithActiveRequests;
    NSObject<OS_dispatch_queue> *_clearanceQueue;
    NSObject<OS_dispatch_queue> *_trafficQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)beginAuthorizationForApplicationIdentifier:(id)a0 withClearanceHandler:(id /* block */)a1;
- (void)endAuthorizationForAppIdentifier:(id)a0 clearanceHandler:(id /* block */)a1;
- (void)cancelAuthorizationForAppIdentifierIfNecessary:(id)a0;

@end
