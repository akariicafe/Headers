@class NSString;

@interface ATXPBDigestOnboardingSuggestionLoggingEvent : PBCodable <NSCopying> {
    struct { unsigned char timeToResolution : 1; unsigned char digestOnboardingSuggestionOutcome : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (retain, nonatomic) NSString *sessionUUID;
@property (nonatomic) BOOL hasDigestOnboardingSuggestionOutcome;
@property (nonatomic) int digestOnboardingSuggestionOutcome;
@property (nonatomic) BOOL hasTimeToResolution;
@property (nonatomic) double timeToResolution;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)digestOnboardingSuggestionOutcomeAsString:(int)a0;
- (int)StringAsDigestOnboardingSuggestionOutcome:(id)a0;

@end
