@class NSString;

@interface AWDBltRequestToResponseDelay : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char connectionType : 1; unsigned char delayMs : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasUniqueid;
@property (retain, nonatomic) NSString *uniqueid;
@property (nonatomic) BOOL hasDelayMs;
@property (nonatomic) unsigned int delayMs;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) unsigned int connectionType;

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
