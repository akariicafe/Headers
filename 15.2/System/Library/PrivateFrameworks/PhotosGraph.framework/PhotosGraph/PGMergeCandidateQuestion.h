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

- (unsigned short)entityType;
- (id)additionalInfo;
- (void)remove;
- (void)setScore:(double)a0;
- (double)score;
- (unsigned short)state;
- (id)entityIdentifier;
- (BOOL)isEqualToQuestion:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPerson:(id)a0 score:(double)a1;
- (unsigned short)type;
- (unsigned long long)hash;
- (unsigned short)displayType;
- (void)persistWithCreationDate:(id)a0;

@end
