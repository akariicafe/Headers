@class NSString, CKCDPCodeServiceRequestDatabaseOwner, CKCDPCodeServiceRequestOperationGroup;

@interface CKCDPCodeServiceRequestRequestContext : PBCodable <NSCopying> {
    struct { unsigned char dsid : 1; unsigned char databaseEnvironment : 1; unsigned char databaseType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (readonly, nonatomic) BOOL hasContainerName;
@property (retain, nonatomic) NSString *containerName;
@property (nonatomic) BOOL hasDatabaseEnvironment;
@property (nonatomic) int databaseEnvironment;
@property (nonatomic) BOOL hasDatabaseType;
@property (nonatomic) int databaseType;
@property (readonly, nonatomic) BOOL hasDeviceId;
@property (retain, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) BOOL hasApplicationBundleId;
@property (retain, nonatomic) NSString *applicationBundleId;
@property (readonly, nonatomic) BOOL hasClientInfo;
@property (retain, nonatomic) NSString *clientInfo;
@property (nonatomic) BOOL hasDsid;
@property (nonatomic) unsigned long long dsid;
@property (readonly, nonatomic) BOOL hasUserAgent;
@property (retain, nonatomic) NSString *userAgent;
@property (readonly, nonatomic) BOOL hasOperationGroup;
@property (retain, nonatomic) CKCDPCodeServiceRequestOperationGroup *operationGroup;
@property (readonly, nonatomic) BOOL hasDatabaseOwnerId;
@property (retain, nonatomic) CKCDPCodeServiceRequestDatabaseOwner *databaseOwnerId;

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
- (int)StringAsDatabaseType:(id)a0;
- (id)databaseTypeAsString:(int)a0;
- (int)StringAsDatabaseEnvironment:(id)a0;
- (id)databaseEnvironmentAsString:(int)a0;

@end
