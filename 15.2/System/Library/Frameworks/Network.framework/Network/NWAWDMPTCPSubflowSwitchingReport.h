@class NSString;

@interface NWAWDMPTCPSubflowSwitchingReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char switchCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasSwitchFromInterfaceName;
@property (retain, nonatomic) NSString *switchFromInterfaceName;
@property (readonly, nonatomic) BOOL hasSwitchToInterfaceName;
@property (retain, nonatomic) NSString *switchToInterfaceName;
@property (nonatomic) BOOL hasSwitchCount;
@property (nonatomic) int switchCount;

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
