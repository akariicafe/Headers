@class NSDictionary;

@interface HIDDisplayUserAdjustmentInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
}

@property (readonly) BOOL valid;

- (BOOL)invalidate:(id *)a0;
- (id)initWithContainerID:(id)a0;
- (id)get:(id *)a0;
- (void).cxx_destruct;
- (id)initWithService:(unsigned int)a0;
- (id)getHIDDevices;
- (BOOL)setupInterface;
- (BOOL)set:(id)a0 error:(id *)a1;

@end
