@class NSString;
@protocol MTLDevice;

@interface _MTLSamplerState : NSObject <MTLSamplerStateSPI>

@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
