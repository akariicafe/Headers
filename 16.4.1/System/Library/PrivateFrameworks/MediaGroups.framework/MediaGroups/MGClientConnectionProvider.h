@class NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MGClientConnectionProvider : NSObject <MGClientConnectionProviderProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSXPCConnection *serviceConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
