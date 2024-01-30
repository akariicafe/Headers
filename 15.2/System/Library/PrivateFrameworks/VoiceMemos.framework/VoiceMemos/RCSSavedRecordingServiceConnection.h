@interface RCSSavedRecordingServiceConnection : NSXPCConnection

+ (id)newConnection;
+ (id)clientInterface;
+ (id)serviceInterface;

@end
