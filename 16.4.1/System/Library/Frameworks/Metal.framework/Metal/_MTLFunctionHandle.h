@class NSString;
@protocol MTLDevice;

@interface _MTLFunctionHandle : NSObject <MTLFunctionHandle> {
    unsigned long long _functionType;
    NSString *_name;
    id<MTLDevice> _device;
}

@property (readonly) unsigned long long functionType;
@property (readonly) NSString *name;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFunctionType:(unsigned long long)a0 name:(id)a1 device:(id)a2;

@end
