@class NSArray;

@interface SAMPPlaybackButton : SAAceView

@property (copy, nonatomic) NSArray *pauseCommands;
@property (copy, nonatomic) NSArray *playCommands;

+ (id)playbackButton;
+ (id)playbackButtonWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
