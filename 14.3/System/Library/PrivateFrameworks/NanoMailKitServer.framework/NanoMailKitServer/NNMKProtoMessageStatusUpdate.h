@class NSString;

@interface NNMKProtoMessageStatusUpdate : PBCodable <NSCopying> {
    struct { unsigned char statusVersion : 1; unsigned char updatedStatus : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMessageId;
@property (retain, nonatomic) NSString *messageId;
@property (nonatomic) BOOL hasUpdatedStatus;
@property (nonatomic) unsigned int updatedStatus;
@property (nonatomic) BOOL hasStatusVersion;
@property (nonatomic) unsigned int statusVersion;

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

@end
