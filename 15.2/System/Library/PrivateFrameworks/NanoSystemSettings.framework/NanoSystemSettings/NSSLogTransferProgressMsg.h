@class NSString;

@interface NSSLogTransferProgressMsg : PBCodable <NSCopying> {
    struct { unsigned char progress : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPath;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) BOOL hasProgress;
@property (nonatomic) unsigned long long progress;

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
