@class ICSDateValue, NSArray, NSMutableDictionary, NSNumber;

@interface ICSRecurrenceRule : NSObject <NSSecureCoding, ICSWriting> {
    unsigned long long _freq;
    NSMutableDictionary *_parameters;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long freq;
@property (retain, nonatomic) ICSDateValue *until;
@property (nonatomic) NSNumber *count;
@property (nonatomic) NSNumber *interval;
@property (retain, nonatomic) NSArray *bysecond;
@property (retain, nonatomic) NSArray *byminute;
@property (retain, nonatomic) NSArray *byhour;
@property (retain, nonatomic) NSArray *byday;
@property (retain, nonatomic) NSArray *bymonthday;
@property (retain, nonatomic) NSArray *byyearday;
@property (retain, nonatomic) NSArray *byweekno;
@property (retain, nonatomic) NSArray *bymonth;
@property (retain, nonatomic) NSArray *bysetpos;
@property (nonatomic) NSNumber *wkst;

+ (id)recurrenceRuleFromICSString:(id)a0;
+ (id)recurrenceRuleFromICSCString:(const char *)a0 withTokenizer:(id)a1;

- (void).cxx_destruct;
- (id)parameterValueForName:(id)a0;
- (void)setParameterValue:(id)a0 forName:(id)a1;
- (id)ICSStringWithOptions:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrequency:(unsigned long long)a0;
- (id)propertiesToIncludeForChecksumVersion:(int)a0;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)a0;
- (id)propertiesToObscure;
- (void)ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (id)parametersToIncludeForChecksumVersion:(int)a0;
- (id)parametersToObscure;
- (BOOL)shouldObscureValue;
- (void)removeParameterValueForName:(id)a0;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (void)cleanUpForStartDate:(id)a0;
- (id)occurrencesForStartDate:(id)a0 fromDate:(id)a1 toDate:(id)a2 inTimeZone:(id)a3;

@end
