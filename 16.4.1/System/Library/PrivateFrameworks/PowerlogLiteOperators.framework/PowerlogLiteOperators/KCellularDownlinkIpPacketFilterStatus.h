@class NSMutableArray;

@interface KCellularDownlinkIpPacketFilterStatus : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char bearerContextId : 1; unsigned char subsId : 1; unsigned char isActivated : 1; unsigned char isEchoReqBlocked : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasBearerContextId;
@property (nonatomic) unsigned int bearerContextId;
@property (nonatomic) BOOL hasIsActivated;
@property (nonatomic) BOOL isActivated;
@property (nonatomic) BOOL hasIsEchoReqBlocked;
@property (nonatomic) BOOL isEchoReqBlocked;
@property (retain, nonatomic) NSMutableArray *filters;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

+ (Class)filtersType;

- (unsigned long long)filtersCount;
- (void)addFilters:(id)a0;
- (id)filtersAtIndex:(unsigned long long)a0;
- (void)clearFilters;
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
