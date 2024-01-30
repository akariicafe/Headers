@class NSString, SignpostEvent;

@interface SignpostInterval : SignpostObject

@property (readonly, nonatomic) NSString *_intervalTypeString;
@property (retain, nonatomic) SignpostEvent *beginEvent;
@property (retain, nonatomic) SignpostEvent *endEvent;
@property (readonly, nonatomic) BOOL isSyntheticInterval;

+ (id)serializationTypeNumber;

- (unsigned long long)scope;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (long long)tv_sec;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (float)durationSeconds;
- (int)tv_usec;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)startMachContinuousTime;
- (unsigned long long)endMachContinuousTime;
- (id)number1Name;
- (id)number1Value;
- (id)string1Value;
- (id)initWithBeginEvent:(id)a0 endEvent:(id)a1;
- (id)humanReadableType;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1;
- (BOOL)telemetryEnabled;
- (id)string1Name;
- (id)string2Name;
- (id)string2Value;
- (id)number2Name;
- (id)number2Value;
- (int)tz_minuteswest;
- (int)tz_dsttime;
- (void)_adjustBeginTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (void)_adjustEndTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (BOOL)_hasBeginTimeval;
- (BOOL)_hasEndTimeval;
- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(BOOL)a2;
- (BOOL)beginTimezone:(struct timezone { int x0; int x1; } *)a0;
- (BOOL)endTimezone:(struct timezone { int x0; int x1; } *)a0;
- (id)descriptionWithTimeFormat:(unsigned long long)a0 verbosity:(unsigned char)a1;
- (id)_eventDescriptions;

@end
