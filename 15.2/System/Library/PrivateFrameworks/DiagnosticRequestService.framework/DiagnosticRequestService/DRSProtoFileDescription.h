@class NSString;

@interface DRSProtoFileDescription : PBCodable <NSCopying> {
    struct { unsigned char logSize : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLogType;
@property (retain, nonatomic) NSString *logType;
@property (nonatomic) BOOL hasLogSize;
@property (nonatomic) unsigned long long logSize;
@property (readonly, nonatomic) BOOL hasFileName;
@property (retain, nonatomic) NSString *fileName;

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
