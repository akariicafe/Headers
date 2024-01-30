@class ATIDSSocket, IDSDevice;

@interface ATIDSConnectionInfo : NSObject

@property (retain, nonatomic) IDSDevice *device;
@property (nonatomic) long long priority;
@property (nonatomic) double wakeupTimestamp;
@property (nonatomic) unsigned long long connectionState;
@property (nonatomic) unsigned int failureCount;
@property (retain, nonatomic) ATIDSSocket *socket;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
