@class SFRequestAppClipInstallCommand;

@interface SearchUIAppClipButtonItemState : SearchUIButtonItemState

@property (retain, nonatomic) SFRequestAppClipInstallCommand *command;

- (id)cachedStateValue;
- (BOOL)isPossiblyAvailable;
- (void)checkIfAvailable:(id /* block */)a0;

@end
