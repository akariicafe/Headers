@interface AVCPacketRelayDriver : NSObject

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)startMonitoringFileDescriptor:(int)a0 forConnection:(id)a1;
- (void)stopMonitoringFileDescriptor:(int)a0;

@end
