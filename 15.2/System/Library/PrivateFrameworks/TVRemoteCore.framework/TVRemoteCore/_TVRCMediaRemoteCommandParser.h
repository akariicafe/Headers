@class NSArray, NSMutableSet;

@interface _TVRCMediaRemoteCommandParser : NSObject {
    NSArray *_allCommands;
    NSMutableSet *_enabledCommandNames;
}

- (void).cxx_destruct;
- (void)_gatherEnabledCommands;
- (BOOL)_containsAnySkipCommands;
- (id)_skipButtons;
- (BOOL)_containsAnyTrackCommands;
- (id)_trackAndSpeedButtons;
- (BOOL)_containsEnabledCommand:(unsigned int)a0;
- (id)buttonsForCommands:(id)a0;

@end
