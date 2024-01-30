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

@end
