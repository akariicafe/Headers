@class SFLaunchAppCommand;

@interface SearchUISFLaunchAppCommand : SearchUITapCommand

@property (readonly, nonatomic) SFLaunchAppCommand *command;

+ (id)commandForRowModel:(id)a0 environment:(id)a1;
+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;

- (unsigned long long)destination;
- (void)performCommandWithCompletion:(id /* block */)a0;

@end
