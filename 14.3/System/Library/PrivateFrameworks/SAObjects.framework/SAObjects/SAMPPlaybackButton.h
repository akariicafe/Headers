@class NSArray;

@interface SAMPPlaybackButton : SAAceView

@property (copy, nonatomic) NSArray *pauseCommands;
@property (copy, nonatomic) NSArray *playCommands;

+ (id)playbackButtonWithDictionary:(id)a0 context:(id)a1;
+ (id)playbackButton;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
