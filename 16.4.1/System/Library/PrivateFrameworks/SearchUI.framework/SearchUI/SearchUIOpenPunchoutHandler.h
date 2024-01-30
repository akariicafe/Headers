@class SFOpenPunchoutCommand;

@interface SearchUIOpenPunchoutHandler : SearchUICommandHandler

@property (readonly) SFOpenPunchoutCommand *command;

+ (id)fallbackCommandForRowModel:(id)a0 environment:(id)a1;
+ (id)queryItemValueForName:(id)a0 inURL:(id)a1;

- (id)url;
- (id)defaultTitle;
- (BOOL)supportsShare;
- (id)createViewControllerForCommand:(id)a0 environment:(id)a1;
- (id)defaultSymbolName;
- (id)destinationPunchout;
- (void)fetchShareableURLWithCompletionHandler:(id /* block */)a0;
- (id)itemProviderForCopy;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (BOOL)schemeSupportedForCopyAndShare;
- (BOOL)supportsCopy;

@end
