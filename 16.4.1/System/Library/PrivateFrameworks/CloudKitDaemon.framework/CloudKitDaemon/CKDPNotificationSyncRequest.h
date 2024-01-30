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
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (Class)responseClass;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
