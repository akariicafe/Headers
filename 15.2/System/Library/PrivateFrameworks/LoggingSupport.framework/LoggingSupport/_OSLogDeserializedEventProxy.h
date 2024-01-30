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

- (id)bootUUID;
- (unsigned long long)timeToLive;
- (unsigned long long)activityIdentifier;
- (id)subsystem;
- (struct timezone { int x0; int x1; } *)unixTimeZone;
- (id)formatString;
- (id)category;
- (unsigned long long)creatorActivityIdentifier;
- (struct timezone { int x0; int x1; } *)lossEndUnixTimeZone;
- (id)_frameForDict:(id)a0;
- (id)signpostName;
- (struct timeval { long long x0; int x1; } *)unixDate;
- (id)process;
- (id)processImageUUID;
- (id)sender;
- (id)timeZone;
- (struct timeval { long long x0; int x1; } *)lossEndUnixDate;
- (void)_populate_timezone:(struct timezone { int x0; int x1; } *)a0 withDict:(id)a1;
- (unsigned long long)creatorProcessUniqueIdentifier;
- (struct { unsigned int x0; BOOL x1; })lossCount;
- (unsigned long long)size;
- (unsigned long long)threadIdentifier;
- (void)_resetNeedsLookup;
- (struct timeval { long long x0; int x1; } *)lossStartUnixDate;
- (unsigned long long)signpostType;
- (unsigned long long)transitionActivityIdentifier;
- (unsigned long long)senderImageOffset;
- (const char *)senderImageUUIDBytes;
- (id)date;
- (unsigned long long)lossEndMachContinuousTimestamp;
- (unsigned long long)signpostScope;
- (unsigned long long)parentActivityIdentifier;
- (void).cxx_destruct;
- (unsigned long long)continuousNanosecondsSinceBoot;
- (id)composedMessage;
- (id)backtrace;
- (id)senderImageUUID;
- (unsigned long long)lossStartMachContinuousTimestamp;
- (unsigned long long)machContinuousTimestamp;
- (void)_populate_timeval:(struct timeval { long long x0; int x1; } *)a0 withDict:(id)a1;
- (unsigned long long)type;
- (id)decomposedMessage;
- (id)senderImagePath;
- (unsigned long long)traceIdentifier;
- (int)processIdentifier;
- (unsigned long long)signpostIdentifier;
- (const char *)processImageUUIDBytes;
- (id)processImagePath;
- (unsigned long long)logType;
- (struct timezone { int x0; int x1; } *)lossStartUnixTimeZone;

@end
