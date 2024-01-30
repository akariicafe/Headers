@class NSString, NSData, HDCodableMessageVersion;

@interface HDCodableClinicalAccount : PBCodable <NSCopying> {
    struct { unsigned char creationDate : 1; unsigned char lastFetchDate : 1; unsigned char lastFullFetchDate : 1; unsigned char modificationDate : 1; unsigned char userEnabled : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGatewayExternalID;
@property (retain, nonatomic) NSString *gatewayExternalID;
@property (nonatomic) BOOL hasUserEnabled;
@property (nonatomic) BOOL userEnabled;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) BOOL hasModificationDate;
@property (nonatomic) double modificationDate;
@property (nonatomic) BOOL hasLastFetchDate;
@property (nonatomic) double lastFetchDate;
@property (readonly, nonatomic) BOOL hasSyncIdentifier;
@property (retain, nonatomic) NSData *syncIdentifier;
@property (nonatomic) BOOL hasLastFullFetchDate;
@property (nonatomic) double lastFullFetchDate;
@property (readonly, nonatomic) BOOL hasAccountIdentifier;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL hasPatientHash;
@property (retain, nonatomic) NSString *patientHash;
@property (readonly, nonatomic) BOOL hasMessageVersion;
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion;

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
