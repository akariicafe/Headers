@class NSString;

@interface PPPBEvaluationRecord : PBCodable <NSCopying> {
    struct { unsigned char deviceId : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasContents;
@property (retain, nonatomic) NSString *contents;
@property (nonatomic) BOOL hasDeviceId;
@property (nonatomic) long long deviceId;

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
