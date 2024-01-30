@class NSString;

@interface PKProtobufSubcredentialInvitationMessage : PBCodable <NSCopying> {
    struct { unsigned char status : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasPhoneInvitation;
@property (retain, nonatomic) NSString *phoneInvitation;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasDataString;
@property (retain, nonatomic) NSString *dataString;
@property (readonly, nonatomic) BOOL hasWatchInvitation;
@property (retain, nonatomic) NSString *watchInvitation;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (retain, nonatomic) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsStatus:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)statusAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
