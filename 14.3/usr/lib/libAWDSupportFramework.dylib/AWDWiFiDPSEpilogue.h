@class AWDWAQuickDpsStats, AWDWADiagnosisActionAssociationDifferences, NSMutableArray;

@interface AWDWiFiDPSEpilogue : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char action : 1; unsigned char afterRecommendedAction : 1; unsigned char beforeAction : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasBeforeAction;
@property (nonatomic) int beforeAction;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) int action;
@property (nonatomic) BOOL hasAfterRecommendedAction;
@property (nonatomic) int afterRecommendedAction;
@property (readonly, nonatomic) BOOL hasChanges;
@property (retain, nonatomic) AWDWADiagnosisActionAssociationDifferences *changes;
@property (retain, nonatomic) NSMutableArray *associationChanges;
@property (readonly, nonatomic) BOOL hasQDpsStats;
@property (retain, nonatomic) AWDWAQuickDpsStats *qDpsStats;

+ (Class)associationChangesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)actionAsString:(int)a0;
- (int)StringAsAction:(id)a0;
- (void)addAssociationChanges:(id)a0;
- (unsigned long long)associationChangesCount;
- (void)clearAssociationChanges;
- (id)associationChangesAtIndex:(unsigned long long)a0;
- (id)beforeActionAsString:(int)a0;
- (int)StringAsBeforeAction:(id)a0;
- (id)afterRecommendedActionAsString:(int)a0;
- (int)StringAsAfterRecommendedAction:(id)a0;

@end
