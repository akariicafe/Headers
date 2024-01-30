@class NSString, NSData;

@interface HDCloudSyncCodableAttachmentReference : PBCodable <NSCopying> {
    struct { unsigned char creationDate : 1; unsigned char options : 1; unsigned char schemaVersion : 1; unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasObjectIdentifier;
@property (retain, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) BOOL hasSchemaIdentifier;
@property (retain, nonatomic) NSString *schemaIdentifier;
@property (readonly, nonatomic) BOOL hasAttachmentIdentifier;
@property (retain, nonatomic) NSString *attachmentIdentifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) long long options;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) NSData *metadata;
@property (nonatomic) BOOL hasSchemaVersion;
@property (nonatomic) long long schemaVersion;
@property (readonly, nonatomic) BOOL hasSystemBuildVersion;
@property (retain, nonatomic) NSString *systemBuildVersion;
@property (readonly, nonatomic) BOOL hasProductType;
@property (retain, nonatomic) NSString *productType;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;

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
