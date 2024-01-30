@class NSString;

@interface AVCTestMonitorInjectAudioConfig : NSObject

@property (nonatomic) int injectAudioConfigType;
@property (nonatomic) double amplitude;
@property (nonatomic) NSString *audioFileName;
@property (nonatomic) double startHostTime;
@property (nonatomic) double loopLength;

@end
