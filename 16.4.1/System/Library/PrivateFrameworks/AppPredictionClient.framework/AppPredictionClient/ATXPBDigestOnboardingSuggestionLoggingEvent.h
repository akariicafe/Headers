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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsDigestOnboardingSuggestionOutcome:(id)a0;
- (id)digestOnboardingSuggestionOutcomeAsString:(int)a0;

@end
