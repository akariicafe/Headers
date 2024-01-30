@class NSArray;

@interface MPChangeShuffleModeCommand : MPRemoteCommand {
    NSArray *_supportedShuffleTypes;
}

@property (nonatomic) long long currentShuffleType;

- (id)newCommandEventWithType:(long long)a0 preservesShuffleMode:(BOOL)a1;
- (void).cxx_destruct;
- (id)newCommandEventWithType:(long long)a0;
- (id)_mediaRemoteCommandInfoOptions;
- (void)setSupportedShuffleTypes:(id)a0;

@end
