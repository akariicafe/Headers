@class ARSession, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MDARSessionObserver : NSObject <ARSessionDelegate> {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct ARSessionObserver { void /* function */ **x0; } *_observer;
}

@property (nonatomic) ARSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
