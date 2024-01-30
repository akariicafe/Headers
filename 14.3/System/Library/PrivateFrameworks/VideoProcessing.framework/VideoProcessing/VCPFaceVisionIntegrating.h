@class NSString;

@interface VCPFaceVisionIntegrating : NSObject <PVVisionIntegrating>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureRequest:(id)a0 algorithmUmbrellaVersion:(unsigned int)a1;

@end
