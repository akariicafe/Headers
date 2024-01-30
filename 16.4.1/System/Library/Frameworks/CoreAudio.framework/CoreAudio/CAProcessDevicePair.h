@class NSString;

@interface CAProcessDevicePair : NSObject

@property (readonly) int processID;
@property (readonly) NSString *deviceUID;

- (void).cxx_destruct;
- (id)initWithProcessID:(int)a0 andDeviceUID:(id)a1;

@end
