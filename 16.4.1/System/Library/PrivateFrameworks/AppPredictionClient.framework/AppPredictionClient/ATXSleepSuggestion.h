@class ATXSleepSuggestionOccurrence;

@interface ATXSleepSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATXSleepSuggestionOccurrence *occurrence;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithOccurence:(id)a0;

@end
