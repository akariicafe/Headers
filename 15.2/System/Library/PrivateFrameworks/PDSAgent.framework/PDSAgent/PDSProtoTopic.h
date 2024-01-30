@class NSString, NSMutableArray;

@interface PDSProtoTopic : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *qualifier;
@property (retain, nonatomic) NSMutableArray *appInfos;

+ (Class)appInfoType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)appInfosCount;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)appInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)clearAppInfos;
- (void)addAppInfo:(id)a0;
- (id)dictionaryRepresentation;

@end
