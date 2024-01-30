@class NSString;

@interface NWAWDNWL2InterfaceQueueStats : PBCodable <NSCopying> {
    struct { unsigned char avgQueueDelay : 1; unsigned char maxQueueDelay : 1; unsigned char minQueueDelay : 1; unsigned char interfaceType : 1; unsigned char slot : 1; } _has;
}

@property (nonatomic) BOOL hasInterfaceType;
@property (nonatomic) int interfaceType;
@property (readonly, nonatomic) BOOL hasInterfaceName;
@property (retain, nonatomic) NSString *interfaceName;
@property (nonatomic) BOOL hasSlot;
@property (nonatomic) int slot;
@property (nonatomic) BOOL hasAvgQueueDelay;
@property (nonatomic) unsigned long long avgQueueDelay;
@property (nonatomic) BOOL hasMinQueueDelay;
@property (nonatomic) unsigned long long minQueueDelay;
@property (nonatomic) BOOL hasMaxQueueDelay;
@property (nonatomic) unsigned long long maxQueueDelay;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (int)StringAsSlot:(id)a0;
- (id)slotAsString:(int)a0;
- (id)dictionaryRepresentation;
- (id)interfaceTypeAsString:(int)a0;
- (int)StringAsInterfaceType:(id)a0;

@end
