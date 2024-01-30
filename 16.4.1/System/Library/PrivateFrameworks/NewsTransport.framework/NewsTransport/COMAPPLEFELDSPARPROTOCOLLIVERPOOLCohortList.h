@class NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *cohorts;

+ (Class)cohortsType;

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
- (void)addCohorts:(id)a0;
- (id)cohortsAtIndex:(unsigned long long)a0;
- (void)clearCohorts;
- (unsigned long long)cohortsCount;

@end
