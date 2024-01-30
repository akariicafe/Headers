@class NSString, NSMutableArray;

@interface _AWDWiFiUIScanSession : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char duration : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (retain, nonatomic) NSMutableArray *counts;
@property (readonly, nonatomic) BOOL hasProcess;
@property (retain, nonatomic) NSString *process;

+ (Class)countsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)countsCount;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearCounts;
- (void)addCounts:(id)a0;
- (id)countsAtIndex:(unsigned long long)a0;

@end
