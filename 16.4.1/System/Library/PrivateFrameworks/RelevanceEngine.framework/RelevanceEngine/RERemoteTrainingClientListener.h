@class NSXPCListener, NSString, NSMutableSet, NSObject;
@protocol RERemoteTrainingClientListenerDelegate, OS_dispatch_queue;

@interface RERemoteTrainingClientListener : NSObject <NSXPCListenerDelegate> {
    NSMutableSet *_clients;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<RERemoteTrainingClientListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTrainingClientListener;

@end
