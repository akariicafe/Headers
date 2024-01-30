@class NSString, NSMutableArray;

@interface ABCPbSigConfigWhitelist : PBCodable <NSCopying> {
    struct { unsigned char globalDecision : 1; } _has;
}

@property (nonatomic) BOOL hasGlobalDecision;
@property (nonatomic) int globalDecision;
@property (readonly, nonatomic) BOOL hasBuild;
@property (retain, nonatomic) NSString *build;
@property (readonly, nonatomic) BOOL hasBuildVariant;
@property (retain, nonatomic) NSString *buildVariant;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSMutableArray *sigConfigs;

+ (Class)sigConfigType;

- (id)sigConfigAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearSigConfigs;
- (void)addSigConfig:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)sigConfigsCount;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (int)StringAsGlobalDecision:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)globalDecisionAsString:(int)a0;

@end
