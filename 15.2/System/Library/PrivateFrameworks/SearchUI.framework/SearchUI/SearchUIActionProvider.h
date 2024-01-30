@class UIActivityViewController, SearchUIRowModel, NSItemProvider, SFCommand, SearchUICommandEnvironment, UIMenu;

@interface SearchUIActionProvider : NSObject

@property (readonly) SearchUICommandEnvironment *environment;
@property (retain, nonatomic) UIActivityViewController *controller;
@property (readonly, nonatomic) SFCommand *command;
@property (readonly, nonatomic) SearchUIRowModel *rowModel;
@property (readonly, nonatomic) BOOL supportsCopy;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) BOOL supportsShare;
@property (readonly) UIMenu *menu;

+ (id)actionProviderForRowModel:(id)a0 command:(id)a1 commandEnvironment:(id)a2;
+ (id)actionProviderForPreviewButtons:(id)a0 title:(id)a1 commandEnvironment:(id)a2;

- (void).cxx_destruct;
- (void)fetchShareableURL:(id /* block */)a0;
- (id)initWithRowModel:(id)a0 command:(id)a1 commandEnivornment:(id)a2;
- (id)initWithPreviewButtons:(id)a0 title:(id)a1 commandEnvironment:(id)a2;
- (id)customActivityViewController;

@end
