@class SFOpenPunchoutCommand;

@interface SearchUIPunchoutActionProvider : SearchUIActionProvider

@property (readonly, nonatomic) SFOpenPunchoutCommand *command;

- (id)url;
- (id)itemProvider;
- (void)fetchShareableURL:(id /* block */)a0;

@end
