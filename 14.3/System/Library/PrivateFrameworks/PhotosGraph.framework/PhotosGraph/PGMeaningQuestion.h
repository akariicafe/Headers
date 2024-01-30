@class NSDictionary, NSString;

@interface PGMeaningQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (id)additionalInfo;
- (unsigned short)entityType;
- (void).cxx_destruct;
- (id)entityIdentifier;
- (unsigned short)displayType;
- (unsigned short)type;
- (unsigned short)state;
- (double)localFactoryScore;
- (id)initWithMeaningLabel:(id)a0 assetUUID:(id)a1 localFactoryScore:(double)a2;
- (id)initWithConfirmedMeaningLabel:(id)a0 assetUUID:(id)a1;

@end
