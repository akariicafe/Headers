@class NSURL, NSString, SFOpenFileProviderItemCommand;

@interface SearchUIFilesActionProvider : SearchUIActionProvider

@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSString *utiType;
@property (readonly, nonatomic) SFOpenFileProviderItemCommand *command;

- (id)itemProvider;
- (void).cxx_destruct;
- (void)fetchShareableURL:(id /* block */)a0;

@end
