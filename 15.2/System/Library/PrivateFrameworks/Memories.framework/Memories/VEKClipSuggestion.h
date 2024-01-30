@protocol VEKClipProtocol;

@interface VEKClipSuggestion : VEKRangeSuggestion

@property (retain, nonatomic) id<VEKClipProtocol> clip;

- (id)description;
- (void).cxx_destruct;
- (id)initWithClipToEmulate:(id)a0;

@end
