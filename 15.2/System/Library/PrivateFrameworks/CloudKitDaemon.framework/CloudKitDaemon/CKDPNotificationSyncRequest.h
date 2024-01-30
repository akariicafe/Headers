@class NSData;

@interface CKDPNotificationSyncRequest : PBRequest <NSCopying> {
    struct { unsigned char maxChanges : 1; unsigned char wantsChanges : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasServerChangeToken;
@property (retain, nonatomic) NSData *serverChangeToken;
@property (nonatomic) BOOL hasMaxChanges;
@property (nonatomic) unsigned int maxChanges;
@property (nonatomic) BOOL hasWantsChanges;
@property (nonatomic) BOOL wantsChanges;

+ (id)options;

- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
