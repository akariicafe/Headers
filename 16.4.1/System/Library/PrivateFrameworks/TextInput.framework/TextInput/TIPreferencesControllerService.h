@class NSString, NSXPCListener, NSObject;
@protocol OS_dispatch_queue;

@interface TIPreferencesControllerService : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPreferencesController;

@end
