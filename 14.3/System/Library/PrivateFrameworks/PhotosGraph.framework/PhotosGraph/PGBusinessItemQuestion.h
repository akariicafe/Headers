@class NSDictionary, NSString;

@interface PGBusinessItemQuestion : PGSurveyQuestion {
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
- (id)initWithAssetUUID:(id)a0 businessUUID:(id)a1 businessName:(id)a2 localFactoryScore:(double)a3;

@end
