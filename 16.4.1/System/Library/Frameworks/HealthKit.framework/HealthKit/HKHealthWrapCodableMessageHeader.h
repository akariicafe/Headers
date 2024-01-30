@class NSData, NSString;

@interface HKHealthWrapCodableMessageHeader : PBCodable <NSCopying> {
    struct { unsigned char version : 1; unsigned char trailingHMACLength : 1; unsigned char trailingSHALength : 1; unsigned char compressed : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;
@property (readonly, nonatomic) BOOL hasEncryptedMessageKey;
@property (retain, nonatomic) NSData *encryptedMessageKey;
@property (readonly, nonatomic) BOOL hasEncryptionIdentity;
@property (retain, nonatomic) NSData *encryptionIdentity;
@property (readonly, nonatomic) BOOL hasUploadUUID;
@property (retain, nonatomic) NSData *uploadUUID;
@property (readonly, nonatomic) BOOL hasStudyIdentifier;
@property (retain, nonatomic) NSString *studyIdentifier;
@property (readonly, nonatomic) BOOL hasEncryptedHMACKey;
@property (retain, nonatomic) NSData *encryptedHMACKey;
@property (nonatomic) BOOL hasTrailingHMACLength;
@property (nonatomic) int trailingHMACLength;
@property (nonatomic) BOOL hasTrailingSHALength;
@property (nonatomic) int trailingSHALength;
@property (nonatomic) BOOL hasCompressed;
@property (nonatomic) BOOL compressed;
@property (readonly, nonatomic) BOOL hasStudyUUID;
@property (retain, nonatomic) NSData *studyUUID;

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
