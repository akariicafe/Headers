@class NSString;
@protocol MTLDevice;

@interface MTLDebugFunctionHandle : MTLToolsFunctionHandle <MTLFunctionHandle>

@property (readonly) unsigned long long functionType;
@property (readonly) NSString *name;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
