@class NSString, NSMutableArray;

@interface PDSProtoTopic : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *qualifier;
@property (retain, nonatomic) NSMutableArray *appInfos;

+ (Class)appInfoType;

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
- (void)addAppInfo:(id)a0;
- (unsigned long long)appInfosCount;
- (void)clearAppInfos;
- (id)appInfoAtIndex:(unsigned long long)a0;

@end
