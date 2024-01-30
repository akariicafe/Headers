@class SFOpenCoreSpotlightItemCommand;

@interface SearchUICoreSpotlightActionProvider : SearchUIActionProvider

@property (readonly, nonatomic) SFOpenCoreSpotlightItemCommand *command;

- (id)itemProvider;
- (id)itemProviderFileTypes;
- (void)fetchShareableURL:(id /* block */)a0;
- (void)fetchFileURLForFileType:(id)a0 completion:(id /* block */)a1;
- (id)customMenuElements;

@end
