@class NSObject, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AFUserNotificationProvider : NSObject <AFUserNotificationServiceDelegate> {
    NSXPCConnection *_connection;
    NSMutableDictionary *_responseHandlersByNotificationID;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)_connection;
- (void)withdrawNotificationRequestWithIdentifier:(id)a0;
- (void)receivedNotificationResponse:(id)a0;
- (void)postNotificationRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
