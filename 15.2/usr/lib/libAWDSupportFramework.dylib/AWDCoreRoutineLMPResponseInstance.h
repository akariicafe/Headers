@class NSString;

@interface AWDCoreRoutineLMPResponseInstance : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char interaction : 1; unsigned char selected : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasEventId;
@property (retain, nonatomic) NSString *eventId;
@property (nonatomic) BOOL hasSelected;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL hasInteraction;
@property (nonatomic) int interaction;

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

@end
