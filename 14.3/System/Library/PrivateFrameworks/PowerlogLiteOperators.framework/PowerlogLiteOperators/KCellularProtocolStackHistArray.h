@class NSMutableArray;

@interface KCellularProtocolStackHistArray : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char duration : 1; unsigned char subsId : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (retain, nonatomic) NSMutableArray *hists;

+ (Class)histType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addHist:(id)a0;
- (unsigned long long)histsCount;
- (void)clearHists;
- (id)histAtIndex:(unsigned long long)a0;

@end
