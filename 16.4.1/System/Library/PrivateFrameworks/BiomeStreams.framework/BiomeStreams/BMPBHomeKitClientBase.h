@class NSString;

@interface BMPBHomeKitClientBase : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char duration : 1; unsigned char homeOccupancy : 1; } _has;
}

@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (readonly, nonatomic) BOOL hasHomeUniqueIdentifier;
@property (retain, nonatomic) NSString *homeUniqueIdentifier;
@property (nonatomic) BOOL hasHomeOccupancy;
@property (nonatomic) int homeOccupancy;
@property (readonly, nonatomic) BOOL hasSource;
@property (retain, nonatomic) NSString *source;
@property (readonly, nonatomic) BOOL hasClientName;
@property (retain, nonatomic) NSString *clientName;
@property (readonly, nonatomic) BOOL hasEventCorrelationIdentifier;
@property (retain, nonatomic) NSString *eventCorrelationIdentifier;

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
