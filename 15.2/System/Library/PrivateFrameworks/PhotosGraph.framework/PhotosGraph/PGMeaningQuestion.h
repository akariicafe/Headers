@class NSDictionary, NSString;

@interface PGMeaningQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (unsigned short)entityType;
- (id)additionalInfo;
- (unsigned short)state;
- (id)entityIdentifier;
- (void).cxx_destruct;
- (unsigned short)type;
- (unsigned short)displayType;
- (double)localFactoryScore;
- (id)initWithMeaningLabel:(id)a0 assetUUID:(id)a1 localFactoryScore:(double)a2;
- (id)initWithConfirmedMeaningLabel:(id)a0 assetUUID:(id)a1;

@end
