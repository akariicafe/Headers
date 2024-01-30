@interface HDDeviceQueryServer : HDQueryServer

+ (Class)queryClass;

- (void)_queue_start;
- (id)deviceQueryClientProxy;
- (void)_deliverErrorToClient:(id)a0;

@end
