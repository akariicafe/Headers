@class NSArray;

@interface SFVisibleSuggestionsFeedback : SFFeedback

@property (copy, nonatomic) NSArray *suggestions;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSuggestions:(id)a0;

@end
