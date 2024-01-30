@class NSDictionary, NSString;

@interface CMISoftwareFlashRenderingFrameParamsV1 : NSObject <CMISoftwareFlashRenderingFrameParams>

@property (retain, nonatomic) struct __CVBuffer { } *lscGains;
@property (retain, nonatomic) NSDictionary *lscParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;

@end
