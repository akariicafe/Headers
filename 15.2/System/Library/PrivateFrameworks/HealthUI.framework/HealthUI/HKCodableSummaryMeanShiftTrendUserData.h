@class NSString, NSMutableArray, HKCodableSummaryVisualizationPoint;

@interface HKCodableSummaryMeanShiftTrendUserData : PBCodable <NSCopying> {
    struct { unsigned char discoveryDateData : 1; unsigned char diagramStyle : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *visualizationPoints;
@property (readonly, nonatomic) BOOL hasObjectTypeIdentifier;
@property (retain, nonatomic) NSString *objectTypeIdentifier;
@property (readonly, nonatomic) BOOL hasTrendPrimaryText;
@property (retain, nonatomic) NSString *trendPrimaryText;
@property (readonly, nonatomic) BOOL hasBaselineVisualization;
@property (retain, nonatomic) HKCodableSummaryVisualizationPoint *baselineVisualization;
@property (readonly, nonatomic) BOOL hasChangeVisualization;
@property (retain, nonatomic) HKCodableSummaryVisualizationPoint *changeVisualization;
@property (readonly, nonatomic) BOOL hasCoveredDateRangeRawValue;
@property (retain, nonatomic) NSString *coveredDateRangeRawValue;
@property (nonatomic) BOOL hasDiagramStyle;
@property (nonatomic) int diagramStyle;
@property (readonly, nonatomic) BOOL hasChangeTypeRawValue;
@property (retain, nonatomic) NSString *changeTypeRawValue;
@property (readonly, nonatomic) BOOL hasNotificationIdentifier;
@property (retain, nonatomic) NSString *notificationIdentifier;
@property (nonatomic) BOOL hasDiscoveryDateData;
@property (nonatomic) double discoveryDateData;
@property (readonly, nonatomic) BOOL hasTrendPrimaryShortText;
@property (retain, nonatomic) NSString *trendPrimaryShortText;

+ (Class)visualizationPointsType;

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
- (void)addVisualizationPoints:(id)a0;
- (unsigned long long)visualizationPointsCount;
- (void)clearVisualizationPoints;
- (id)visualizationPointsAtIndex:(unsigned long long)a0;
- (id)diagramStyleAsString:(int)a0;
- (int)StringAsDiagramStyle:(id)a0;

@end
