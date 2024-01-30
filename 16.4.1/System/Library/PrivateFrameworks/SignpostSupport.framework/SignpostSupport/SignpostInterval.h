@class NSString, SignpostEvent;

@interface SignpostInterval : SignpostObject

@property (readonly, nonatomic) NSString *_intervalTypeString;
@property (retain, nonatomic) SignpostEvent *beginEvent;
@property (retain, nonatomic) SignpostEvent *endEvent;
@property (readonly, nonatomic) BOOL isSyntheticInterval;

+ (id)serializationTypeNumber;

- (long long)tv_sec;
- (id)string1Name;
- (unsigned long long)endMachContinuousTime;
- (id)string2Name;
- (unsigned long long)scope;
- (id)descriptionWithTimeFormat:(unsigned long long)a0 verbosity:(unsigned char)a1;
- (int)tv_usec;
- (id)string1Value;
- (int)tz_minuteswest;
- (int)tz_dsttime;
- (BOOL)_hasBeginTimeval;
- (id)humanReadableType;
- (BOOL)beginTimezone:(struct timezone { int x0; int x1; } *)a0;
- (BOOL)endTimezone:(struct timezone { int x0; int x1; } *)a0;
- (BOOL)_hasEndTimeval;
- (void)_adjustEndTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (id)number1Name;
- (id)number2Value;
- (void)_adjustBeginTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (id)debugDescription;
- (id)_eventDescriptions;
- (float)durationSeconds;
- (unsigned long long)durationMachContinuousTime;
- (BOOL)telemetryEnabled;
- (BOOL)isEqual:(id)a0;
- (id)number1Value;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)string2Value;
- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(BOOL)a2;
- (unsigned long long)startMachContinuousTime;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1;
- (id)initWithBeginEvent:(id)a0 endEvent:(id)a1;
- (id)number2Name;
- (BOOL)intersectsInterval:(id)a0;
- (void).cxx_destruct;

@end
