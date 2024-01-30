@class NSString;

@interface SearchUIWatchListPunchoutCommand : SearchUITapCommand <SearchUIFeedbackDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;

- (void)performCommandWithCompletion:(id /* block */)a0;
- (BOOL)prefersModalPresentation;
- (void)presentViewController:(id)a0;

@end
