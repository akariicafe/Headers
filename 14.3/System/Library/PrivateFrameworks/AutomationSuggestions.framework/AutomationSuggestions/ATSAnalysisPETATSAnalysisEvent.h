@class NSString;

@interface ATSAnalysisPETATSAnalysisEvent : PBCodable <NSCopying> {
    unsigned int _absoluteAntecedentSupport;
    unsigned int _absoluteConsequentSupport;
    unsigned int _absoluteSupport;
    NSString *_activityType;
    NSString *_bundleID;
    float _confidence;
    float _conviction;
    NSString *_feedbackAction;
    NSString *_intentClass;
    float _lift;
    float _rulePowerFactor;
    NSString *_sessionId;
    float _support;
    NSString *_trialID;
    NSString *_trigger;
    unsigned int _uniqueDaysLastWeek;
    unsigned int _uniqueDaysTotal;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
