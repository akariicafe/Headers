@class NSString, NSXPCConnection;

@interface HAENotificationCenterClient : NSObject <HAENotificationCenterDelegate> {
    NSXPCConnection *connection;
    BOOL connectionDidInvalidate;
}

@property (retain, nonatomic) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
