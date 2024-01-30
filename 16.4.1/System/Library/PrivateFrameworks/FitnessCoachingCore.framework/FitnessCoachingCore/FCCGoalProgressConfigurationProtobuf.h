@class FCCAtypicalDayConfigurationProtobuf, FCCCompletionOffTrackConfigurationProtobuf, FCCAlmostThereConfigurationProtobuf;

@interface FCCGoalProgressConfigurationProtobuf : PBCodable <NSCopying> {
    struct { unsigned char expirationDate : 1; unsigned char userEndOfDayDate : 1; unsigned char userStartOfDayDate : 1; unsigned char minimumNumberOfActiveDays : 1; } _has;
}

@property (nonatomic) BOOL hasMinimumNumberOfActiveDays;
@property (nonatomic) int minimumNumberOfActiveDays;
@property (nonatomic) BOOL hasUserStartOfDayDate;
@property (nonatomic) double userStartOfDayDate;
@property (nonatomic) BOOL hasUserEndOfDayDate;
@property (nonatomic) double userEndOfDayDate;
@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) double expirationDate;
@property (readonly, nonatomic) BOOL hasAlmostThereConfiguration;
@property (retain, nonatomic) FCCAlmostThereConfigurationProtobuf *almostThereConfiguration;
@property (readonly, nonatomic) BOOL hasAtypicalDayConfiguration;
@property (retain, nonatomic) FCCAtypicalDayConfigurationProtobuf *atypicalDayConfiguration;
@property (readonly, nonatomic) BOOL hasCompletionOffTrackConfiguration;
@property (retain, nonatomic) FCCCompletionOffTrackConfigurationProtobuf *completionOffTrackConfiguration;

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

@end
