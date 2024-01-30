@class NSString, NSArray, NSDate, NSMutableArray;

@interface TPSTipStatus : NSObject <NSSecureCoding, NSCopying> {
    NSMutableArray *_hintDisplayedDates;
    NSMutableArray *_desiredOutcomePerformedDates;
    NSMutableArray *_hintNotDisplayedDueToFrequencyControlDates;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *hintDisplayedDates;
@property (copy, nonatomic) NSArray *desiredOutcomePerformedDates;
@property (copy, nonatomic) NSArray *hintNotDisplayedDueToFrequencyControlDates;
@property (nonatomic) long long hintIneligibleReason;
@property (nonatomic) unsigned long long displayType;
@property (nonatomic, getter=isExpired) BOOL expired;
@property (nonatomic, getter=isPreconditionMatched) BOOL preconditionMatched;
@property (copy, nonatomic) NSString *variantIdentifier;
@property (copy, nonatomic) NSDate *dateForTriggerRestartTracking;
@property (copy, nonatomic) NSDate *hintEligibleDate;
@property (copy, nonatomic) NSDate *hintWouldHaveBeenDisplayedDate;
@property (copy, nonatomic) NSDate *hintDismissalDate;
@property (copy, nonatomic) NSDate *contentViewedDate;
@property (copy, nonatomic) NSString *lastDisplayContext;

+ (id)classSet;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isUserKnew;
- (void)setHintDisplayedDates:(id)a0;
- (void)setDesiredOutcomePerformedDates:(id)a0;
- (void)setHintNotDisplayedDueToFrequencyControlDates:(id)a0;
- (void)removeHintEligibleDateStatus;
- (void)addHintDisplayedDate:(id)a0;
- (id)hintDisplayedDates;
- (void)addHintNotDisplayedDueToFrequencyControlDate:(id)a0;
- (id)hintNotDisplayedDueToFrequencyControlDates;
- (id)desiredOutcomePerformedDates;
- (void)addDesiredOutcomePerformedDate:(id)a0;
- (BOOL)reenrollIfAllowed;
- (id)initWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
