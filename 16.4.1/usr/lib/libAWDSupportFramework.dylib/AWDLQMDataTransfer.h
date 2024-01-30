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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsLQM:(id)a0;
- (id)lQMAsString:(int)a0;

@end
