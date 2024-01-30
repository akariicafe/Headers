@class NSString;

@interface NSSAccountsInfoRespMsgAccountInfo : PBCodable <NSCopying> {
    struct { unsigned char aaIsManaged : 1; unsigned char aaPrimaryAccount : 1; unsigned char authenticated : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasUsername;
@property (retain, nonatomic) NSString *username;
@property (readonly, nonatomic) BOOL hasDSID;
@property (retain, nonatomic) NSString *dSID;
@property (nonatomic) BOOL hasAuthenticated;
@property (nonatomic) BOOL authenticated;
@property (readonly, nonatomic) BOOL hasAltDSID;
@property (retain, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *type;
@property (nonatomic) BOOL hasAaPrimaryAccount;
@property (nonatomic) BOOL aaPrimaryAccount;
@property (nonatomic) BOOL hasAaIsManaged;
@property (nonatomic) BOOL aaIsManaged;

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
