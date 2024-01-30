@class SFPlayMediaCommand;

@interface SearchUISFPlayMediaCommand : SearchUIMediaCommand

@property (retain) SFPlayMediaCommand *command;

- (id)intent;
- (id)mediaMetadata;
- (BOOL)supportsIntentPath;

@end
