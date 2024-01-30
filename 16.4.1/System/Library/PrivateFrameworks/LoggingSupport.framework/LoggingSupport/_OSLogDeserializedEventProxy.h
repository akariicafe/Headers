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

- (unsigned long long)activityIdentifier;
- (id)formatString;
- (id)subsystem;
- (unsigned long long)logType;
- (unsigned long long)signpostType;
- (struct { unsigned int x0; BOOL x1; })lossCount;
- (struct timezone { int x0; int x1; } *)lossStartUnixTimeZone;
- (unsigned long long)threadIdentifier;
- (id)decomposedMessage;
- (unsigned long long)continuousNanosecondsSinceBoot;
- (id)sender;
- (int)processIdentifier;
- (struct timezone { int x0; int x1; } *)lossEndUnixTimeZone;
- (void)_populate_timeval:(struct timeval { long long x0; int x1; } *)a0 withDict:(id)a1;
- (unsigned long long)signpostIdentifier;
- (unsigned long long)signpostScope;
- (id)composedMessage;
- (unsigned long long)lossEndMachContinuousTimestamp;
- (id)signpostName;
- (unsigned long long)parentActivityIdentifier;
- (unsigned long long)traceIdentifier;
- (unsigned long long)creatorProcessUniqueIdentifier;
- (const char *)senderImageUUIDBytes;
- (unsigned long long)type;
- (id)_frameForDict:(id)a0;
- (struct timeval { long long x0; int x1; } *)lossEndUnixDate;
- (id)backtrace;
- (id)processImageUUID;
- (id)processImagePath;
- (id)date;
- (struct timeval { long long x0; int x1; } *)unixDate;
- (id)process;
- (id)category;
- (id)senderImagePath;
- (unsigned long long)lossStartMachContinuousTimestamp;
- (unsigned long long)machContinuousTimestamp;
- (id)senderImageUUID;
- (void)_resetNeedsLookup;
- (const char *)processImageUUIDBytes;
- (unsigned long long)creatorActivityIdentifier;
- (unsigned long long)size;
- (unsigned long long)transitionActivityIdentifier;
- (unsigned long long)timeToLive;
- (unsigned long long)senderImageOffset;
- (id)timeZone;
- (void)_populate_timezone:(struct timezone { int x0; int x1; } *)a0 withDict:(id)a1;
- (struct timezone { int x0; int x1; } *)unixTimeZone;
- (void).cxx_destruct;
- (id)bootUUID;
- (struct timeval { long long x0; int x1; } *)lossStartUnixDate;

@end
