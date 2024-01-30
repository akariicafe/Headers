@class NSString;

@interface RMRemoteManagementScreenTimeViewUsage : PBCodable <NSCopying> {
    struct { unsigned char daysSinceLastView : 1; unsigned char timestamp : 1; unsigned char hasPasscode : 1; unsigned char isManaged : 1; unsigned char remoteUser : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasFamilyMemberType;
@property (retain, nonatomic) NSString *familyMemberType;
@property (nonatomic) BOOL hasIsManaged;
@property (nonatomic) BOOL isManaged;
@property (nonatomic) BOOL hasHasPasscode;
@property (nonatomic) BOOL hasPasscode;
@property (nonatomic) BOOL hasRemoteUser;
@property (nonatomic) BOOL remoteUser;
@property (nonatomic) BOOL hasDaysSinceLastView;
@property (nonatomic) unsigned long long daysSinceLastView;

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
