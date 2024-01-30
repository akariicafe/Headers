@class NSString, SignpostEvent;

@interface SignpostInterval : SignpostObject

@property (readonly, nonatomic) NSString *_intervalTypeString;
@property (retain, nonatomic) SignpostEvent *beginEvent;
@property (retain, nonatomic) SignpostEvent *endEvent;
@property (readonly, nonatomic) BOOL isSyntheticInterval;

+ (id)serializationTypeNumber;

- (int)tz_dsttime;
- (id)string2Name;
- (id)string1Name;
- (BOOL)_hasEndTimeval;
- (int)tz_minuteswest;
- (unsigned long long)scope;
- (id)string2Value;
- (unsigned long long)endMachContinuousTime;
- (float)durationSeconds;
- (id)descriptionWithTimeFormat:(unsigned long long)a0 verbosity:(unsigned char)a1;
- (id)humanReadableType;
- (BOOL)_hasBeginTimeval;
- (BOOL)beginTimezone:(struct timezone { int x0; int x1; } *)a0;
- (id)number2Value;
- (BOOL)endTimezone:(struct timezone { int x0; int x1; } *)a0;
- (void)_adjustEndTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (id)string1Value;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)durationMachContinuousTime;
- (BOOL)telemetryEnabled;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1;
- (id)_eventDescriptions;
- (id)number2Name;
- (void)_adjustBeginTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithBeginEvent:(id)a0 endEvent:(id)a1;
- (long long)tv_sec;
- (id)number1Name;
- (int)tv_usec;
- (unsigned long long)hash;
- (id)number1Value;
- (unsigned long long)startMachContinuousTime;
- (id)debugDescription;
- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(BOOL)a2;

@end
