@class NSString;

@interface HDCodableCoding : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSystem;
@property (retain, nonatomic) NSString *system;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (readonly, nonatomic) BOOL hasCode;
@property (retain, nonatomic) NSString *code;

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
