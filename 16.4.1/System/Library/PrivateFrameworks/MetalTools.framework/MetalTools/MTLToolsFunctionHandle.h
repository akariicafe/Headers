@class MTLToolsFunction, NSString;
@protocol MTLDevice;

@interface MTLToolsFunctionHandle : MTLToolsObject <MTLFunctionHandle>

@property (readonly) MTLToolsFunction *function;
@property (readonly) unsigned long long functionType;
@property (readonly) NSString *name;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithBaseObject:(id)a0 parent:(id)a1 function:(id)a2;

@end
