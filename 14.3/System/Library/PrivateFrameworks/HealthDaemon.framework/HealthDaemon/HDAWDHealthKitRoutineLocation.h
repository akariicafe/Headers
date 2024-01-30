@class NSString;

@interface HDAWDHealthKitRoutineLocation : PBCodable <NSCopying> {
    struct { unsigned char confidenceMillis : 1; unsigned char recentVisitCount : 1; unsigned char uncertaintyMillis : 1; unsigned char locationType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLocationUUID;
@property (retain, nonatomic) NSString *locationUUID;
@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) int locationType;
@property (nonatomic) BOOL hasUncertaintyMillis;
@property (nonatomic) long long uncertaintyMillis;
@property (nonatomic) BOOL hasConfidenceMillis;
@property (nonatomic) long long confidenceMillis;
@property (nonatomic) BOOL hasRecentVisitCount;
@property (nonatomic) long long recentVisitCount;

- (int)StringAsLocationType:(id)a0;
- (void).cxx_destruct;
- (id)locationTypeAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
