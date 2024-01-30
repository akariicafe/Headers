@class CSAudioProvider, CSAudioStreamHolding;

@interface CSRemoraSecondPassAudioStreamHoldingContext : NSObject

@property (retain, nonatomic) CSAudioStreamHolding *audioStreamHolding;
@property (retain, nonatomic) CSAudioProvider *audioProvider;

- (void).cxx_destruct;

@end
