@class NSString, NSObject, CLSEndpointConnection;
@protocol OS_dispatch_queue;

@interface ClassKitAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {
    CLSEndpointConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
