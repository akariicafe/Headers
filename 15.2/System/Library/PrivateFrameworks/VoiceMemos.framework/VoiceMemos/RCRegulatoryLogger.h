@interface RCRegulatoryLogger : NSObject

@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *logger;

- (void)transmittingAudioData;
- (id)init;
- (void)dealloc;
- (void)readingAudioData;

@end
