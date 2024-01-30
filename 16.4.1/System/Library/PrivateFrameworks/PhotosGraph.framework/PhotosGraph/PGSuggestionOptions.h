@class NSIndexSet, NSDictionary, NSDate;

@interface PGSuggestionOptions : NSObject

@property (retain, nonatomic) NSDate *localToday;
@property (retain, nonatomic) NSDate *universalStartDate;
@property (retain, nonatomic) NSDate *universalEndDate;
@property (retain, nonatomic) NSDate *universalEndDateForWholeLibrarySuggestions;
@property (nonatomic) unsigned long long maximumNumberOfSuggestions;
@property (nonatomic) BOOL allowNotification;
@property (nonatomic) BOOL shouldProcessExistingSuggestions;
@property (nonatomic) BOOL discardGeneratedSuggestions;
@property (nonatomic) BOOL clearFeaturedSuggestions;
@property (nonatomic) BOOL ignoreCollisionsWithExistingSuggestions;
@property (nonatomic) BOOL ignoreCollisionsWithSameBatchSuggestions;
@property (retain, nonatomic) NSIndexSet *suggestionTypeWhitelist;
@property (retain, nonatomic) NSIndexSet *suggestionSubtypeWhitelist;
@property (retain, nonatomic) NSIndexSet *suggestionTypeBlocklist;
@property (retain, nonatomic) NSIndexSet *suggestionSubtypeBlocklist;
@property (nonatomic) BOOL generateInvalidSuggestions;
@property (nonatomic) BOOL computeReasons;
@property (retain, nonatomic) NSDictionary *additionalOptions;

- (id)initWithOptionsDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setDefaultStartAndEndDatesIfNeeded;
- (void)setDefaultStartAndEndDatesIfNeededWithNumberOfDays:(long long)a0;

@end
