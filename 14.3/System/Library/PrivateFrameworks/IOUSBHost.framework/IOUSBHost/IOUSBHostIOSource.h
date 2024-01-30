@class IOUSBHostInterface;

@interface IOUSBHostIOSource : NSObject

@property unsigned int debugLoggingMask;
@property unsigned int ioConnection;
@property struct IONotificationPort { } *ioNotificationPortRef;
@property (retain) IOUSBHostInterface *hostInterface;
@property unsigned long long deviceAddress;
@property unsigned long long endpointAddress;

- (void).cxx_destruct;
- (id)initWithHostInterface:(id)a0 endpointAddress:(unsigned long long)a1 ioConnection:(unsigned int)a2 ioNotificationPortRef:(struct IONotificationPort { } *)a3 deviceAddress:(unsigned long long)a4;

@end
