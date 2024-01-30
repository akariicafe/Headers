@protocol ATXUserEducationSuggestion;

@interface ATXUserEducationSuggestionFeedback : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<ATXUserEducationSuggestion> userEducationSuggestion;
@property (readonly, nonatomic) unsigned long long feedbackType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)suggestion;
- (void).cxx_destruct;
- (id)initWithUserEducationSuggestion:(id)a0 feedbackType:(unsigned long long)a1;

@end
