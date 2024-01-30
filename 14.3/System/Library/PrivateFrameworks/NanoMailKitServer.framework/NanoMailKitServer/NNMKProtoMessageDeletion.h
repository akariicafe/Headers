@class NSString;

@interface NNMKProtoMessageDeletion : PBCodable <NSCopying> {
    struct { unsigned char deletionState : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMessageId;
@property (retain, nonatomic) NSString *messageId;
@property (nonatomic) BOOL hasDeletionState;
@property (nonatomic) unsigned int deletionState;

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
