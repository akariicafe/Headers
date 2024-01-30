@class NSString, NSData, NPKProtoPass;

@interface NPKProtoRemotePassUpdateRequest : PBRequest <NSCopying> {
    struct { unsigned char cancelUpdate : 1; unsigned char requestAuthorization : 1; unsigned char shouldNotifyUser : 1; } _has;
}

@property (retain, nonatomic) NSString *passID;
@property (readonly, nonatomic) BOOL hasUpdateRequestData;
@property (retain, nonatomic) NSData *updateRequestData;
@property (nonatomic) BOOL hasCancelUpdate;
@property (nonatomic) BOOL cancelUpdate;
@property (readonly, nonatomic) BOOL hasPass;
@property (retain, nonatomic) NPKProtoPass *pass;
@property (nonatomic) BOOL hasRequestAuthorization;
@property (nonatomic) BOOL requestAuthorization;
@property (nonatomic) BOOL hasShouldNotifyUser;
@property (nonatomic) BOOL shouldNotifyUser;

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
