@class NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *cohorts;

+ (Class)cohortsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addCohorts:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (unsigned long long)cohortsCount;
- (void)clearCohorts;
- (id)cohortsAtIndex:(unsigned long long)a0;

@end
