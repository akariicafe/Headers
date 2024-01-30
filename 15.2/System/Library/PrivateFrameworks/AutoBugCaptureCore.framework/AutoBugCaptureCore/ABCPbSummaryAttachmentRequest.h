@class NSString;

@interface ABCPbSummaryAttachmentRequest : PBRequest <NSCopying> {
    struct { unsigned char fileSize : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFileName;
@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) BOOL hasFileSize;
@property (nonatomic) unsigned int fileSize;

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
