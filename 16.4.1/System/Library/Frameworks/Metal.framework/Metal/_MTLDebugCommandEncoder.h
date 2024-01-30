@class NSString;
@protocol MTLDevice;

@interface _MTLDebugCommandEncoder : _MTLCommandEncoder <MTLDebugCommandEncoder>

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)kprintfBytes:(const char *)a0 length:(unsigned long long)a1;
- (void)IOLogBytes:(const char *)a0 length:(unsigned long long)a1;
- (void)IOLog:(id)a0;
- (void)kprintf:(id)a0;

@end
