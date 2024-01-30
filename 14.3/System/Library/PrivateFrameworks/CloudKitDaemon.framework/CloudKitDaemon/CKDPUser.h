@class CKDPUserAlias, NSString, CKDPProtectionInfo, CKDPIdentifier;

@interface CKDPUser : PBCodable <NSCopying> {
    struct { unsigned char isInNetwork : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) CKDPIdentifier *identifier;
@property (readonly, nonatomic) BOOL hasAlias;
@property (retain, nonatomic) CKDPUserAlias *alias;
@property (readonly, nonatomic) BOOL hasFirstName;
@property (retain, nonatomic) NSString *firstName;
@property (readonly, nonatomic) BOOL hasLastName;
@property (retain, nonatomic) NSString *lastName;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (nonatomic) BOOL hasIsInNetwork;
@property (nonatomic) BOOL isInNetwork;

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
