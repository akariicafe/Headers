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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsGlobalDecision:(id)a0;
- (void)clearSigConfigs;
- (unsigned long long)sigConfigsCount;
- (void)addSigConfig:(id)a0;
- (id)globalDecisionAsString:(int)a0;
- (id)sigConfigAtIndex:(unsigned long long)a0;

@end
