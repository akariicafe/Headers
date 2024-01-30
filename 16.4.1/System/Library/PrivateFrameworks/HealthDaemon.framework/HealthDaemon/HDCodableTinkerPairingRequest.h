@class NSString, NSData;

@interface HDCodableTinkerPairingRequest : PBRequest <NSCopying> {
    struct { unsigned char guardianDSID : 1; unsigned char setupType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) BOOL hasGuardianIcloudIdentifier;
@property (retain, nonatomic) NSString *guardianIcloudIdentifier;
@property (nonatomic) BOOL hasSetupType;
@property (nonatomic) int setupType;
@property (readonly, nonatomic) BOOL hasGuardianFirstName;
@property (retain, nonatomic) NSString *guardianFirstName;
@property (readonly, nonatomic) BOOL hasGuardianLastName;
@property (retain, nonatomic) NSString *guardianLastName;
@property (nonatomic) BOOL hasGuardianDSID;
@property (nonatomic) long long guardianDSID;
@property (readonly, nonatomic) BOOL hasProfileIdentifier;
@property (retain, nonatomic) NSData *profileIdentifier;
@property (readonly, nonatomic) BOOL hasTinkerFirstName;
@property (retain, nonatomic) NSString *tinkerFirstName;
@property (readonly, nonatomic) BOOL hasTinkerLastName;
@property (retain, nonatomic) NSString *tinkerLastName;

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
- (int)StringAsSetupType:(id)a0;
- (id)setupTypeAsString:(int)a0;

@end
