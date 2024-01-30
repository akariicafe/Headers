@class SFRequestAppClipInstallCommand;

@interface SearchUIAppClipButtonItemState : SearchUIButtonItemState

@property (retain, nonatomic) SFRequestAppClipInstallCommand *command;

- (id)cachedStateValue;
- (void)checkIfAvailable:(id /* block */)a0;
- (BOOL)isPossiblyAvailable;

@end
