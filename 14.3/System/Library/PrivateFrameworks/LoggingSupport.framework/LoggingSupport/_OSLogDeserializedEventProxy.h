@class _OSLogEventSerializationMetadata, NSDictionary;

@interface _OSLogDeserializedEventProxy : OSLogEventProxy {
    BOOL _unixDateNeedsLookup;
    BOOL _unixTimeZoneNeedsLookup;
    struct timezone { int tz_minuteswest; int tz_dsttime; } _unixTimeZone;
    struct timeval { long long tv_sec; int tv_usec; } _unixDate;
    BOOL _lossStartUnixDateNeedsLookup;
    BOOL _lossStartUnixTimeZoneNeedsLookup;
    struct timeval { long long tv_sec; int tv_usec; } _lossStartUnixDate;
    struct timezone { int tz_minuteswest; int tz_dsttime; } _lossStartUnixTimeZone;
    BOOL _lossEndUnixDateNeedsLookup;
    BOOL _lossEndUnixTimeZoneNeedsLookup;
    struct timeval { long long tv_sec; int tv_usec; } _lossEndUnixDate;
    struct timezone { int tz_minuteswest; int tz_dsttime; } _lossEndUnixTimeZone;
    unsigned long long _type;
}

@property (retain, nonatomic) _OSLogEventSerializationMetadata *metadata;
@property (retain, nonatomic) NSDictionary *curEventDictionary;
@property (nonatomic) BOOL needsTypeLookup;

- (unsigned long long)logType;
- (id)decomposedMessage;
- (id)bootUUID;
- (struct timeval { long long x0; int x1; } *)lossEndUnixDate;
- (id)composedMessage;
- (unsigned long long)parentActivityIdentifier;
- (struct timezone { int x0; int x1; } *)unixTimeZone;
- (id)processImageUUID;
- (unsigned long long)continuousNanosecondsSinceBoot;
- (void).cxx_destruct;
- (struct timeval { long long x0; int x1; } *)unixDate;
- (unsigned long long)threadIdentifier;
- (struct timezone { int x0; int x1; } *)lossStartUnixTimeZone;
- (id)senderImagePath;
- (unsigned long long)signpostIdentifier;
- (id)process;
- (struct timeval { long long x0; int x1; } *)lossStartUnixDate;
- (id)subsystem;
- (unsigned long long)timeToLive;
- (unsigned long long)signpostScope;
- (id)senderImageUUID;
- (unsigned long long)creatorActivityIdentifier;
- (id)sender;
- (id)formatString;
- (unsigned long long)size;
- (id)backtrace;
- (id)date;
- (id)signpostName;
- (unsigned long long)creatorProcessUniqueIdentifier;
- (unsigned long long)lossEndMachContinuousTimestamp;
- (struct timezone { int x0; int x1; } *)lossEndUnixTimeZone;
- (unsigned long long)traceIdentifier;
- (id)timeZone;
- (unsigned long long)transitionActivityIdentifier;
- (unsigned long long)lossStartMachContinuousTimestamp;
- (unsigned long long)activityIdentifier;
- (unsigned long long)signpostType;
- (const char *)processImageUUIDBytes;
- (struct { unsigned int x0; BOOL x1; })lossCount;
- (const char *)senderImageUUIDBytes;
- (id)processImagePath;
- (unsigned long long)machContinuousTimestamp;
- (id)category;
- (unsigned long long)senderImageOffset;
- (int)processIdentifier;
- (void)_populate_timeval:(struct timeval { long long x0; int x1; } *)a0 withDict:(id)a1;
- (void)_populate_timezone:(struct timezone { int x0; int x1; } *)a0 withDict:(id)a1;
- (void)_resetNeedsLookup;
- (unsigned long long)type;
- (id)_frameForDict:(id)a0;

@end
