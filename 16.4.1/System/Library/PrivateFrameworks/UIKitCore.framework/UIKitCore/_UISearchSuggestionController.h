@class NSArray;
@protocol _UISearchSuggestionControllerDelegate;

@interface _UISearchSuggestionController : NSObject

@property (copy, nonatomic) NSArray *suggestions;
@property (weak, nonatomic) id<_UISearchSuggestionControllerDelegate> delegate;

- (void)updateSuggestions:(id)a0 userInitiated:(BOOL)a1;
- (void).cxx_destruct;

@end
