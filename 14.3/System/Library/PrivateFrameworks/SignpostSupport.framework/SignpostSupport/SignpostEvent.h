@class NSUUID, NSString, NSArray, SignpostMetrics;

@interface SignpostEvent : SignpostObject <SignpostSupportLoggingSupportArchiveEvent>

@property (nonatomic) BOOL _hasTotalFrames;
@property (nonatomic) unsigned long long _totalFrameCount;
@property (nonatomic) BOOL isAnimationStart;
@property (nonatomic) long long tv_sec;
@property (nonatomic) int tv_usec;
@property (nonatomic) int tz_minuteswest;
@property (nonatomic) int tz_dsttime;
@property (nonatomic) unsigned long long _machContinuousTimestamp;
@property (nonatomic) int processID;
@property (nonatomic) unsigned long long processUniqueID;
@property (nonatomic) unsigned long long threadID;
@property (retain, nonatomic) NSUUID *processImageUUID;
@property (retain, nonatomic) NSString *processImagePath;
@property (retain, nonatomic) NSString *processName;
@property (retain, nonatomic) NSString *metadata;
@property (retain, nonatomic) NSArray *metadataSegments;
@property (nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) unsigned long long _resolvedEventType;
@property (readonly, nonatomic) NSString *_key;
@property (readonly, nonatomic) BOOL overridesTime;
@property (readonly, nonatomic) BOOL _overridesOwnTime;
@property (nonatomic) unsigned long long overridingBeginMachContinuousTime;
@property (nonatomic) unsigned long long overridingEndMachContinuousTime;
@property (nonatomic) unsigned long long overridingEmitMachContinuousTime;
@property (retain, nonatomic) NSArray *stackFrames;
@property (readonly, nonatomic) unsigned long long timeRecordedMachContinuousTime;
@property (readonly, nonatomic) unsigned long long timeRecordedNanoseconds;
@property (readonly, nonatomic) BOOL overridesBeginTime;
@property (readonly, nonatomic) BOOL overridesEndTime;
@property (readonly, nonatomic) BOOL overridesEmitTime;
@property (readonly, nonatomic) unsigned long long overridingBeginNanoseconds;
@property (readonly, nonatomic) unsigned long long overridingEndNanoseconds;
@property (readonly, nonatomic) unsigned long long overridingEmitNanoseconds;
@property (readonly, nonatomic) SignpostMetrics *metrics;
@property (readonly, nonatomic) BOOL isSyntheticIntervalEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (float)durationSeconds;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)startMachContinuousTime;
- (unsigned long long)endMachContinuousTime;
- (id)_debugDescription:(BOOL)a0;
- (id)initWithSubsystem:(id)a0 category:(id)a1 timebaseRatio:(double)a2 unixDate:(struct timeval { long long x0; int x1; } *)a3 unixTimeZone:(struct timezone { int x0; int x1; } *)a4 stackFrames:(id)a5;
- (void)_populateMetrics;
- (id)humanReadableType;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1;
- (void)_adjustBeginTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (void)_adjustEndTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(BOOL)a2;
- (unsigned long long)_resolvedBeginTime;
- (unsigned long long)_resolvedEndTime;
- (void)_adjustTimeStruct:(struct timeval { long long x0; int x1; } *)a0 asBegin:(BOOL)a1;
- (id)_argumentObjectWithName:(id)a0;
- (id)_argumentObjectWithName:(id)a0 expectedClass:(Class)a1;
- (id)_stringArgumentWithName:(id)a0;
- (id)_numberArgumentWithName:(id)a0;
- (id)_dataArgumentWithName:(id)a0;

@end
