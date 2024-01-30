@class Suggestion;

@interface ExecuteSuggestionIntent : INIntent

@property (nonatomic, retain) Suggestion *suggestion;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
