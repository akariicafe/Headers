@class NSString;

@interface AWDIDSOTRSessionNegotiation : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char priority : 1; unsigned char timestamp : 1; unsigned char result : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) unsigned int result;

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

@end
