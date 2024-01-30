@class SFPlayMediaCommand;

@interface SearchUIPlayMediaHandler : SearchUIMediaHandler

@property (retain) SFPlayMediaCommand *command;

- (unsigned long long)destination;
- (id)intent;
- (id)mediaMetadata;
- (BOOL)supportsIntentPath;

@end
