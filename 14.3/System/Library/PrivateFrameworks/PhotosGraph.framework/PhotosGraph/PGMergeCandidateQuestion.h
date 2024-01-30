@class NSString, NSDictionary, PHPerson;

@interface PGMergeCandidateQuestion : PGSurveyQuestion {
    unsigned short _type;
    unsigned short _displayType;
    unsigned short _state;
    unsigned short _entityType;
    NSString *_entityIdentifier;
    double _score;
    NSDictionary *_additionalInfo;
}

@property (readonly, nonatomic) PHPerson *person;

+ (id)questionForPerson:(id)a0;

- (id)additionalInfo;
- (void)remove;
- (unsigned short)entityType;
- (void).cxx_destruct;
- (double)score;
- (void)setScore:(double)a0;
- (id)entityIdentifier;
- (id)initWithPerson:(id)a0 score:(double)a1;
- (unsigned long long)hash;
- (unsigned short)displayType;
- (unsigned short)type;
- (BOOL)isEqualToQuestion:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned short)state;
- (void)persistWithCreationDate:(id)a0;

@end
