@class NSString, NSMutableArray;

@interface BMPBInferredModeEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char confidenceScore : 1; unsigned char uiLocation : 1; unsigned char modeType : 1; unsigned char origin : 1; unsigned char isAutomationEnabled : 1; unsigned char isStart : 1; unsigned char shouldSuggestTriggers : 1; } _has;
}

@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) BOOL hasModeIdentifier;
@property (retain, nonatomic) NSString *modeIdentifier;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) int origin;
@property (readonly, nonatomic) BOOL hasOriginBundleId;
@property (retain, nonatomic) NSString *originBundleId;
@property (nonatomic) BOOL hasIsAutomationEnabled;
@property (nonatomic) BOOL isAutomationEnabled;
@property (nonatomic) BOOL hasIsStart;
@property (nonatomic) BOOL isStart;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasOriginAnchorType;
@property (retain, nonatomic) NSString *originAnchorType;
@property (nonatomic) BOOL hasUiLocation;
@property (nonatomic) unsigned long long uiLocation;
@property (nonatomic) BOOL hasConfidenceScore;
@property (nonatomic) double confidenceScore;
@property (retain, nonatomic) NSMutableArray *serializedTriggers;
@property (nonatomic) BOOL hasModeType;
@property (nonatomic) int modeType;
@property (nonatomic) BOOL hasShouldSuggestTriggers;
@property (nonatomic) BOOL shouldSuggestTriggers;
@property (readonly, nonatomic) BOOL hasUserModeName;
@property (retain, nonatomic) NSString *userModeName;

+ (Class)serializedTriggersType;

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
- (int)StringAsOrigin:(id)a0;
- (id)originAsString:(int)a0;
- (int)StringAsModeType:(id)a0;
- (void)addSerializedTriggers:(id)a0;
- (void)clearSerializedTriggers;
- (id)modeTypeAsString:(int)a0;
- (id)serializedTriggersAtIndex:(unsigned long long)a0;
- (unsigned long long)serializedTriggersCount;

@end
