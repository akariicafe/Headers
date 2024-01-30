@class NSString;

@interface AWDLQMDataTransfer : PBCodable <NSCopying> {
    struct { unsigned char lQM : 1; unsigned char rxBytes : 1; unsigned char stateDuration : 1; unsigned char txBytes : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleName;
@property (retain, nonatomic) NSString *bundleName;
@property (nonatomic) BOOL hasLQM;
@property (nonatomic) int lQM;
@property (nonatomic) BOOL hasTxBytes;
@property (nonatomic) unsigned int txBytes;
@property (nonatomic) BOOL hasRxBytes;
@property (nonatomic) unsigned int rxBytes;
@property (nonatomic) BOOL hasStateDuration;
@property (nonatomic) unsigned int stateDuration;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)lQMAsString:(int)a0;
- (int)StringAsLQM:(id)a0;

@end
