@class NSArray, VCSDate, NSString, NSMutableArray;

@interface VCSRecurrenceRule : NSObject <VCSDictifiable>

@property (readonly, nonatomic) unsigned long long recurrenceType;
@property (nonatomic) long long interval;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) long long duration;
@property (retain, nonatomic) NSArray *dayNumberList;
@property (retain, nonatomic) NSArray *monthList;
@property (retain, nonatomic) NSArray *dayList;
@property (retain, nonatomic) NSMutableArray *occurrenceList;
@property (retain, nonatomic) NSMutableArray *weekdayList;
@property (retain, nonatomic) VCSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithString:(const char *)a0;
- (void).cxx_destruct;
- (BOOL)decodeInterval:(const char **)a0;
- (BOOL)decodeDuration:(const char **)a0;
- (id)dictify;
- (id)_decodeNumberList:(const char **)a0 min:(long long)a1 max:(long long)a2;
- (BOOL)decodeDaily:(const char **)a0;
- (BOOL)decodeDigits:(const char **)a0 withResult:(long long *)a1;
- (BOOL)decodeMonthlyByDay:(const char **)a0;
- (BOOL)decodeMonthlyByPos:(const char **)a0;
- (BOOL)decodeOccurrenceList:(const char **)a0;
- (BOOL)decodeWeekdayList:(const char **)a0;
- (BOOL)decodeWeekly:(const char **)a0;
- (BOOL)decodeYearlyByDay:(const char **)a0;
- (BOOL)decodeYearlyByMonth:(const char **)a0;

@end
