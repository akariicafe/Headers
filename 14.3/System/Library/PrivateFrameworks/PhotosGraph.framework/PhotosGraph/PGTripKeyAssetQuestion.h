@class NSDictionary, NSString;

@interface PGTripKeyAssetQuestion : PGSurveyQuestion {
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
- (id)initWithKeyAssetUUID:(id)a0 tripName:(id)a1 isLongTrip:(BOOL)a2 localFactoryScore:(double)a3;

@end
