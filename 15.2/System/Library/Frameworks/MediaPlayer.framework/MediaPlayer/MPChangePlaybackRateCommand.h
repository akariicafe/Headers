@class NSArray;

@interface MPChangePlaybackRateCommand : MPRemoteCommand {
    float _preferredRate;
}

@property (copy, nonatomic) NSArray *supportedPlaybackRates;

- (float)preferredRate;
- (id)_mediaRemoteCommandInfoOptions;
- (void)setPreferredRate:(float)a0;
- (void).cxx_destruct;
- (id)newCommandEventWithPlaybackRate:(float)a0;

@end
