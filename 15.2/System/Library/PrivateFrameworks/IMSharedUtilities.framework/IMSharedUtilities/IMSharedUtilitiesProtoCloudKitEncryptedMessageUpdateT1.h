@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageUpdateT1 : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasMsgid;
@property (retain, nonatomic) NSString *msgid;
@property (readonly, nonatomic) BOOL hasThreadGuid;
@property (retain, nonatomic) NSString *threadGuid;
@property (readonly, nonatomic) BOOL hasThreadPart;
@property (retain, nonatomic) NSString *threadPart;
@property (readonly, nonatomic) BOOL hasPadding;
@property (retain, nonatomic) NSData *padding;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
