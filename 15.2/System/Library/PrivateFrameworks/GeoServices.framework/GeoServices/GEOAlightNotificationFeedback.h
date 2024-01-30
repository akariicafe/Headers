@interface GEOAlightNotificationFeedback : PBCodable <NSCopying> {
    unsigned long long _alightStopMuid;
    double _arrivedAtTimestamp;
    double _lastDetectedLocationHorizontalAccuracy;
    double _lastDetectedLocationTimestamp;
    unsigned long long _lineMuid;
    unsigned long long _previousStopMuid;
    double _triggeredTimestamp;
    int _lastDetectedLocationTraversalPercent;
    unsigned int _stepID;
    int _triggeredLocationTraversalPercent;
    int _trigger;
    BOOL _arrivalDetected;
    BOOL _displayed;
    BOOL _triggered;
    struct { unsigned char has_alightStopMuid : 1; unsigned char has_arrivedAtTimestamp : 1; unsigned char has_lastDetectedLocationHorizontalAccuracy : 1; unsigned char has_lastDetectedLocationTimestamp : 1; unsigned char has_lineMuid : 1; unsigned char has_previousStopMuid : 1; unsigned char has_triggeredTimestamp : 1; unsigned char has_lastDetectedLocationTraversalPercent : 1; unsigned char has_stepID : 1; unsigned char has_triggeredLocationTraversalPercent : 1; unsigned char has_trigger : 1; unsigned char has_arrivalDetected : 1; unsigned char has_displayed : 1; unsigned char has_triggered : 1; } _flags;
}

@property (nonatomic) BOOL hasDisplayed;
@property (nonatomic) BOOL displayed;
@property (nonatomic) BOOL hasTriggered;
@property (nonatomic) BOOL triggered;
@property (nonatomic) BOOL hasLineMuid;
@property (nonatomic) unsigned long long lineMuid;
@property (nonatomic) BOOL hasPreviousStopMuid;
@property (nonatomic) unsigned long long previousStopMuid;
@property (nonatomic) BOOL hasAlightStopMuid;
@property (nonatomic) unsigned long long alightStopMuid;
@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) int trigger;
@property (nonatomic) BOOL hasTriggeredTimestamp;
@property (nonatomic) double triggeredTimestamp;
@property (nonatomic) BOOL hasTriggeredLocationTraversalPercent;
@property (nonatomic) int triggeredLocationTraversalPercent;
@property (nonatomic) BOOL hasLastDetectedLocationTimestamp;
@property (nonatomic) double lastDetectedLocationTimestamp;
@property (nonatomic) BOOL hasLastDetectedLocationTraversalPercent;
@property (nonatomic) int lastDetectedLocationTraversalPercent;
@property (nonatomic) BOOL hasLastDetectedLocationHorizontalAccuracy;
@property (nonatomic) double lastDetectedLocationHorizontalAccuracy;
@property (nonatomic) BOOL hasArrivalDetected;
@property (nonatomic) BOOL arrivalDetected;
@property (nonatomic) BOOL hasArrivedAtTimestamp;
@property (nonatomic) double arrivedAtTimestamp;
@property (nonatomic) BOOL hasStepID;
@property (nonatomic) unsigned int stepID;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)triggerAsString:(int)a0;
- (int)StringAsTrigger:(id)a0;
- (id)dictionaryRepresentation;

@end
