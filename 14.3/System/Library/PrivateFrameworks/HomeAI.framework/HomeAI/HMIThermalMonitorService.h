@interface HMIThermalMonitorService : HMFObject {
    struct __IOHIDServiceClient { } *_service;
}

- (void)dealloc;
- (id)initWithService:(struct __IOHIDServiceClient { } *)a0;
- (double)readValue;

@end
