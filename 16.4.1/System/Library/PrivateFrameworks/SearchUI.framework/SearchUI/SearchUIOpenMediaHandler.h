@class SFOpenMediaCommand;

@interface SearchUIOpenMediaHandler : SearchUIMediaHandler

@property (retain) SFOpenMediaCommand *command;

- (id)intent;
- (id /* block */)actionProvider;
- (id)mediaMetadata;
- (id)clientSelectedBundleIdentifier;
- (BOOL)supportsIntentPath;

@end
