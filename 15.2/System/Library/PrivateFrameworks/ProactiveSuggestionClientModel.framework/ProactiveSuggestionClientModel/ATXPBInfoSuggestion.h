@class NSString, NSData;

@interface ATXPBInfoSuggestion : PBCodable <NSCopying> {
    struct { unsigned char confidenceLevel : 1; unsigned char endDate : 1; unsigned char layouts : 1; unsigned char relevanceScore : 1; unsigned char startDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAppBundleIdentifier;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) BOOL hasWidgetBundleIdentifier;
@property (retain, nonatomic) NSString *widgetBundleIdentifier;
@property (readonly, nonatomic) BOOL hasWidgetKind;
@property (retain, nonatomic) NSString *widgetKind;
@property (nonatomic) BOOL hasLayouts;
@property (nonatomic) long long layouts;
@property (readonly, nonatomic) BOOL hasSuggestionIdentifier;
@property (retain, nonatomic) NSString *suggestionIdentifier;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) BOOL hasArchivedIntent;
@property (retain, nonatomic) NSData *archivedIntent;
@property (readonly, nonatomic) BOOL hasArchivedMetadata;
@property (retain, nonatomic) NSData *archivedMetadata;
@property (readonly, nonatomic) BOOL hasSourceIdentifier;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (nonatomic) BOOL hasConfidenceLevel;
@property (nonatomic) long long confidenceLevel;
@property (nonatomic) BOOL hasRelevanceScore;
@property (nonatomic) double relevanceScore;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (readonly, nonatomic) BOOL hasCriterion;
@property (retain, nonatomic) NSString *criterion;
@property (readonly, nonatomic) BOOL hasArchivedIntentDescription;
@property (retain, nonatomic) NSData *archivedIntentDescription;

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

@end
