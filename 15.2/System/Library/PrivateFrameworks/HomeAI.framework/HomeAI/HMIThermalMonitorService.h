@interface HMIThermalMonitorService : HMFObject {
    struct __IOHIDServiceClient { } *_service;
}

- (id)initWithService:(struct __IOHIDServiceClient { } *)a0;
- (void)dealloc;
- (double)readValue;

@end
