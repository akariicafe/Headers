@class NSString, NSDictionary, PHPerson;

@interface PGNamingQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) PHPerson *person;

+ (id)questionForPerson:(id)a0;

- (id)additionalInfo;
- (void)remove;
- (unsigned short)entityType;
- (void).cxx_destruct;
- (id)entityIdentifier;
- (unsigned short)displayType;
- (unsigned short)type;
- (unsigned short)state;
- (double)localFactoryScore;
- (void)persistWithCreationDate:(id)a0;
- (id)initWithPerson:(id)a0 contactIdentifier:(id)a1 localFactoryScore:(double)a2;
- (id)initWithConfirmedPerson:(id)a0 contactIdentifier:(id)a1 localFactoryScore:(double)a2;
- (id)_additionalInfoFromContactIdentifier:(id)a0;
- (void)legacyPersist;
- (void)legacyRemove;
- (id)_personForContactSuggestion;

@end
