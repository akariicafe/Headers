@class NSString;

@interface CMISoftwareFlashRenderingInferencesV1 : NSObject <CMISoftwareFlashRenderingInferences>

@property (nonatomic) int status;
@property (retain, nonatomic) struct __CVBuffer { } *personMask;
@property (retain, nonatomic) struct __CVBuffer { } *skinMatte;
@property (retain, nonatomic) struct __CVBuffer { } *skyMatte;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
