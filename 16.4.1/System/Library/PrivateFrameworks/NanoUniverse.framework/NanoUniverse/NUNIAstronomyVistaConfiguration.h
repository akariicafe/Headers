@class NSString, CLKDevice;

@interface NUNIAstronomyVistaConfiguration : NSObject

@property (nonatomic) BOOL isRTLLayout;
@property (nonatomic) BOOL isGPUEnabled;
@property (nonatomic) unsigned long long quadViewOptions;
@property (copy, nonatomic) NSString *textureSuffix;
@property (nonatomic) unsigned long long rendererStyle;
@property (nonatomic) long long colorSpace;
@property (retain, nonatomic) CLKDevice *device;
@property (nonatomic) double screenScale;
@property (nonatomic) float maxAPL;
@property (copy, nonatomic) id /* block */ initialSetupOperation;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;

@end
