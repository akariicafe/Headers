@class BWVideoFormat;

@interface BWLearnedNRProcessorControllerConfiguration : BWStillImageProcessorConfiguration

@property (retain, nonatomic) BWVideoFormat *inputFormat;
@property (retain, nonatomic) BWVideoFormat *outputFormat;

- (void)dealloc;

@end
