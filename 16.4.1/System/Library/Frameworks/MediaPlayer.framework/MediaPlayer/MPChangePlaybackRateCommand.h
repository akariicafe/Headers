@class NSArray;

@interface MPChangePlaybackRateCommand : MPRemoteCommand {
    float _preferredRate;
}

@property (copy, nonatomic) NSArray *supportedPlaybackRates;

- (id)newCommandEventWithPlaybackRate:(float)a0;
- (float)preferredRate;
- (id)_mediaRemoteCommandInfoOptions;
- (void)setPreferredRate:(float)a0;
- (void).cxx_destruct;

@end
