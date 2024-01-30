@class NSArray;

@interface MPChangePlaybackRateCommand : MPRemoteCommand {
    float _preferredRate;
}

@property (copy, nonatomic) NSArray *supportedPlaybackRates;

- (void).cxx_destruct;
- (void)setPreferredRate:(float)a0;
- (float)preferredRate;
- (id)newCommandEventWithPlaybackRate:(float)a0;
- (id)_mediaRemoteCommandInfoOptions;

@end
