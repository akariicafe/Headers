@class NSDictionary, NSString;

@interface PGPublicEventQuestion : PGSurveyQuestion {
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
- (id)initWithAssetUUID:(id)a0 publicEventMUID:(unsigned long long)a1 publicEventName:(id)a2 localFactoryScore:(double)a3;

@end
