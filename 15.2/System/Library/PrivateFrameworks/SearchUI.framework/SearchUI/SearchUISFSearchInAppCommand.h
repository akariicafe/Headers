@class SFSearchInAppCommand;

@interface SearchUISFSearchInAppCommand : SearchUITapCommand

@property (readonly, nonatomic) SFSearchInAppCommand *command;

+ (id)appStoreSearchURLFromQuery:(id)a0;

- (unsigned long long)destination;
- (void)performCommandWithCompletion:(id /* block */)a0;

@end
