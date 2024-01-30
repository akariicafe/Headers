@class NSData;

@interface AWDMDNSResponderResolveStatsResult : PBCodable <NSCopying> {
    struct { unsigned char count : 1; unsigned char serverID : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasServerID;
@property (nonatomic) unsigned int serverID;
@property (readonly, nonatomic) BOOL hasData;
@property (retain, nonatomic) NSData *data;

- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)typeAsString:(int)a0;

@end
