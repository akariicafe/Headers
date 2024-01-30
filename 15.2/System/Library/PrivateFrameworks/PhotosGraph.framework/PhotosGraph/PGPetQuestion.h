@class NSDictionary, NSString;

@interface PGPetQuestion : PGSurveyQuestion {
    unsigned short _state;
    unsigned short _displayType;
    unsigned short _entityType;
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
- (id)initWithAssetUUID:(id)a0 displayString:(id)a1 localFactoryScore:(double)a2;

@end
