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
