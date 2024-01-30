@class SYMessageHeader, NSString, NSData;

@interface SYStartSyncSession : PBCodable <NSCopying>

@property (retain, nonatomic) SYMessageHeader *header;
@property (nonatomic) BOOL isResetSync;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) BOOL expectsRollbackSupport;
@property (nonatomic) BOOL expectsRestartSupport;
@property (nonatomic) double sessionTimeout;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) NSData *metadata;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *reason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
