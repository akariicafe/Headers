@interface RCRegulatoryLogger : NSObject

@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *logger;

- (void)readingAudioData;
- (void)dealloc;
- (id)init;
- (void)transmittingAudioData;

@end
