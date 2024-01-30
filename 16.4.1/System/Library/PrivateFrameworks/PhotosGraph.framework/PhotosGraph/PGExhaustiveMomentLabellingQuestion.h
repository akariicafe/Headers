@class NSDictionary, NSString;

@interface PGExhaustiveMomentLabellingQuestion : PGSurveyQuestion {
    unsigned short _entityType;
    unsigned short _state;
    NSDictionary *_additionalInfo;
    double _localFactoryScore;
    NSString *_entityIdentifier;
}

- (unsigned short)entityType;
- (unsigned short)state;
- (unsigned short)type;
- (id)entityIdentifier;
- (unsigned short)displayType;
- (id)additionalInfo;
- (void).cxx_destruct;
- (id)initWithMomentUUID:(id)a0 localFactoryScore:(double)a1 meaningLabels:(id)a2;
- (double)localFactoryScore;

@end
