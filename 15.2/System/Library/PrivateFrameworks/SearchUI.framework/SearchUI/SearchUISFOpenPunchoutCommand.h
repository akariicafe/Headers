@class SFOpenPunchoutCommand;

@interface SearchUISFOpenPunchoutCommand : SearchUITapCommand

@property (readonly) SFOpenPunchoutCommand *command;

+ (id)commandForRowModel:(id)a0 environment:(id)a1;
+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;

- (unsigned long long)destination;
- (id)punchout;
- (void)performCommandWithCompletion:(id /* block */)a0;
- (BOOL)shouldDeselectPreviousSelection;

@end
