@class NSString;
@protocol MTLDevice;

@interface MTLDebugFunctionHandle : MTLToolsFunctionHandle <MTLFunctionHandle>

@property (readonly) unsigned long long stage;
@property (readonly) unsigned long long functionType;
@property (readonly) NSString *name;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseObject:(id)a0 parent:(id)a1 function:(id)a2 stage:(unsigned long long)a3;

@end
