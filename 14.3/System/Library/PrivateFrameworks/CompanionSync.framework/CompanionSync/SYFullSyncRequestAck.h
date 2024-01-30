@class SYMessageHeader, NSString, SYErrorInfo;

@interface SYFullSyncRequestAck : PBCodable <NSCopying>

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *requestSyncID;
@property (nonatomic) BOOL accepted;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) SYErrorInfo *error;
@property (readonly, nonatomic) BOOL hasInProgressSyncID;
@property (retain, nonatomic) NSString *inProgressSyncID;

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
