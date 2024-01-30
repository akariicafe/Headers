@class NSDictionary, NSString;

@interface PGFrequentLocationQuestion : PGSurveyQuestion {
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
- (id)initWithAssetUUID:(id)a0 location:(id)a1 locationTypeName:(id)a2 localFactoryScore:(double)a3;
- (double)localFactoryScore;

@end
