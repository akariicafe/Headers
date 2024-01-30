@class NSNumber;

@interface RecurrenceRule : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) NSNumber *interval;
@property (nonatomic) long long frequency;
@property (nonatomic, retain) NSNumber *weeklyRecurrenceDaysValue;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
