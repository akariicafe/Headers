@class NSDictionary, NSString;

@interface PGMemoryMusicQualityQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (unsigned short)entityType;
- (unsigned short)state;
- (unsigned short)type;
- (id)entityIdentifier;
- (unsigned short)displayType;
- (id)additionalInfo;
- (void).cxx_destruct;
- (id)initWithMemory:(id)a0 song:(id)a1 localFactoryScore:(double)a2;
- (double)localFactoryScore;

@end
