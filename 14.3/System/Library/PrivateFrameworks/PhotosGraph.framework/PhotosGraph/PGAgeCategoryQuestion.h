@class NSDictionary, NSString;

@interface PGAgeCategoryQuestion : PGSurveyQuestion {
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
- (id)initWithPersonIdentifier:(id)a0 ageCategory:(unsigned long long)a1 localFactoryScore:(double)a2;

@end
