@class NSArray, FigCaptureSourceCommonSettings, NSDictionary;

@interface FigCaptureSourceBackings : NSObject

@property (readonly, nonatomic) NSArray *sourceInfoDictionaries;
@property (readonly, nonatomic) FigCaptureSourceCommonSettings *commonSettings;
@property (readonly, nonatomic) NSDictionary *hevcSettings;
@property (readonly, nonatomic) NSDictionary *h264Settings;
@property (readonly, nonatomic) NSDictionary *continuityCaptureCameraCapabilities;

+ (void)initialize;
+ (id)sharedCaptureSourceBackings;

- (void)dealloc;
- (id)initWithSourceInfoDictionaries:(id)a0 commonSettings:(id)a1 hevcSettings:(id)a2 h264Settings:(id)a3;

@end
