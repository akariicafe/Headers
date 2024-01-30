@class NSString, NSMutableArray;

@interface AWDWiFiUIScanSession : PBCodable <NSCopying> {
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

- (void)clearCounts;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)countsCount;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addCounts:(id)a0;
- (id)countsAtIndex:(unsigned long long)a0;

@end
