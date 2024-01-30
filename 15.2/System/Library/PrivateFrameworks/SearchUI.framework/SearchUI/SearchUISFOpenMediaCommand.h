@class SFOpenMediaCommand;

@interface SearchUISFOpenMediaCommand : SearchUIMediaCommand

@property (retain) SFOpenMediaCommand *command;
@property (copy) id /* block */ completion;

- (id)intent;
- (void).cxx_destruct;
- (id)mediaMetadata;
- (id)clientSelectedBundleIdentifier;
- (BOOL)supportsIntentPath;

@end
