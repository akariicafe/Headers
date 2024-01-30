@class NSData;

@interface ADOptOutRequest : PBRequest <NSCopying> {
    struct { unsigned char statusChangeTimestamp : 1; unsigned char transmitTimestamp : 1; unsigned char timezone : 1; unsigned char optedOutStatus : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIAdID;
@property (retain, nonatomic) NSData *iAdID;
@property (nonatomic) BOOL hasOptedOutStatus;
@property (nonatomic) BOOL optedOutStatus;
@property (nonatomic) BOOL hasTransmitTimestamp;
@property (nonatomic) double transmitTimestamp;
@property (nonatomic) BOOL hasStatusChangeTimestamp;
@property (nonatomic) double statusChangeTimestamp;
@property (nonatomic) BOOL hasTimezone;
@property (nonatomic) float timezone;
@property (readonly, nonatomic) BOOL hasDPID;
@property (retain, nonatomic) NSData *dPID;

+ (id)options;

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
