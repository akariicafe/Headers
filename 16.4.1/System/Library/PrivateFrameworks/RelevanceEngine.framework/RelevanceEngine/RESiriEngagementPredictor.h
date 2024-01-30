@class NSString, REUpNextTimer;

@interface RESiriEngagementPredictor : REPredictor <REUpNextSiriObserver, RESiriEngagementPredictorProperties> {
    REUpNextTimer *_siriDecayTimer;
    NSString *_lastSiriDomain;
    float _siriInfluence;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *lastSiriDomain;
@property (readonly, nonatomic) float siriInfluence;

+ (id)supportedFeatures;

@end
