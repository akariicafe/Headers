@class NSArray;

@interface MPChangeRepeatModeCommand : MPRemoteCommand {
    NSArray *_supportedRepeatTypes;
}

@property (nonatomic) long long currentRepeatType;

- (id)newCommandEventWithType:(long long)a0 preservesRepeatMode:(BOOL)a1;
- (id)newCommandEventWithType:(long long)a0;
- (id)_mediaRemoteCommandInfoOptions;
- (void).cxx_destruct;
- (void)setSupportedRepeatTypes:(id)a0;

@end
