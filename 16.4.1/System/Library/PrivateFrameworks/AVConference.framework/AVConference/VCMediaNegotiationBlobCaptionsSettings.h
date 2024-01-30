@interface VCMediaNegotiationBlobCaptionsSettings : PBCodable <NSCopying> {
    struct { unsigned char senderLanguages : 1; unsigned char canDisplayCaptions : 1; } _has;
}

@property (nonatomic) BOOL hasCanDisplayCaptions;
@property (nonatomic) BOOL canDisplayCaptions;
@property (nonatomic) BOOL hasSenderLanguages;
@property (nonatomic) unsigned int senderLanguages;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
