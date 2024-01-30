@class SYMessageHeader, NSString, SYErrorInfo;

@interface SYSyncEndResponse : PBCodable <NSCopying> {
    struct { unsigned char errorResolution : 1; } _has;
}

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *syncID;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) SYErrorInfo *error;
@property (nonatomic) BOOL hasErrorResolution;
@property (nonatomic) int errorResolution;

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
- (id)errorResolutionAsString:(int)a0;
- (int)StringAsErrorResolution:(id)a0;

@end
