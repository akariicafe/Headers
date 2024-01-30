@class NSUUID, ATXAction, NSDate, NSNumber;

@interface ATXProactiveSuggestionPartialIntentResultWrapper : ATXProactiveSuggestionUIFeedbackResult

@property (readonly, nonatomic) NSUUID *partiallyExecutedUUID;
@property (readonly, nonatomic) ATXAction *partiallyExecutedAction;
@property (readonly, nonatomic) NSDate *partiallyExecutedActionStartDate;
@property (readonly, nonatomic) ATXAction *matchingIntentDonatedAction;
@property (readonly, nonatomic) NSDate *matchingIntentDonationDate;
@property (readonly, nonatomic) NSNumber *partialEngagementWasCompleteMatch;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)markPartiallyExecutedSuggestionAsAbandoned;
- (void)markPartiallyExecutedSuggestionAsCompleteMatchWithDonatedAction:(id)a0 donationDate:(id)a1;
- (void)markPartiallyExecutedSuggestionAsPartialMatchWithDonatedAction:(id)a0 donationDate:(id)a1;
- (id)initWithUIFeedbackResult:(id)a0 partiallyExecutedUUID:(id)a1 partiallyExecutedAction:(id)a2 partiallyExecutedActionStartDate:(id)a3 matchingIntentDonatedAction:(id)a4 matchingIntentDonationDate:(id)a5 partialEngagementWasCompleteMatch:(id)a6;
- (BOOL)isEqualToATXProactiveSuggestionPartialIntentResultWrapper:(id)a0;
- (id)initWithUIFeedbackResult:(id)a0;
- (void)updatePartiallyExecutedActionWithProactiveSuggestion:(id)a0;

@end
