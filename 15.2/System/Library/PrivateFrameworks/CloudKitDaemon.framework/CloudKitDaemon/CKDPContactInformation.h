@class NSString;

@interface CKDPContactInformation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEmailAddress;
@property (retain, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) BOOL hasContainerScopedUserId;
@property (retain, nonatomic) NSString *containerScopedUserId;
@property (readonly, nonatomic) BOOL hasFirstName;
@property (retain, nonatomic) NSString *firstName;
@property (readonly, nonatomic) BOOL hasLastName;
@property (retain, nonatomic) NSString *lastName;
@property (readonly, nonatomic) BOOL hasPhoneNumber;
@property (retain, nonatomic) NSString *phoneNumber;

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
