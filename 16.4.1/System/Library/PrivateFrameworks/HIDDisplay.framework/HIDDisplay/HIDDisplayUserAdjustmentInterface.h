@class NSDictionary;

@interface HIDDisplayUserAdjustmentInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
}

@property (readonly) BOOL valid;

- (id)initWithService:(unsigned int)a0;
- (id)initWithContainerID:(id)a0;
- (BOOL)setupInterface;
- (id)get:(id *)a0;
- (void).cxx_destruct;
- (BOOL)invalidate:(id *)a0;
- (BOOL)set:(id)a0 error:(id *)a1;
- (id)getHIDDevices;

@end
