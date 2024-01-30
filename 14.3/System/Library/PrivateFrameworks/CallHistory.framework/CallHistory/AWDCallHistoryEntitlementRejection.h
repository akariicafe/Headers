@class NSString;

@interface AWDCallHistoryEntitlementRejection : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char pid : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasPid;
@property (nonatomic) unsigned int pid;
@property (readonly, nonatomic) BOOL hasProcname;
@property (retain, nonatomic) NSString *procname;

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
