@class NSArray;

@interface CDMShortcutResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) NSArray *voiceCommandsUserParses;

- (void).cxx_destruct;
- (id)commandName;
- (id)initWithVoiceCommandUserParses:(id)a0;

@end
