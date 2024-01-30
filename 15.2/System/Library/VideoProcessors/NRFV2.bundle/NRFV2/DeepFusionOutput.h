@class NSString, NSMutableDictionary;

@interface DeepFusionOutput : NSObject <IBPDeepFusionOutput>

@property (retain, nonatomic) struct __CVBuffer { } *buffer;
@property (retain, nonatomic) NSMutableDictionary *metadata;
@property (retain, nonatomic) struct __CVBuffer { } *linearOutputPixelBuffer;
@property (retain, nonatomic) NSMutableDictionary *linearOutputMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
