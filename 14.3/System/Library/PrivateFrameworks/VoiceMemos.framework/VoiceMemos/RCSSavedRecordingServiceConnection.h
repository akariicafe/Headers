@interface RCSSavedRecordingServiceConnection : NSXPCConnection

+ (id)serviceInterface;
+ (id)newConnection;
+ (id)clientInterface;

@end
