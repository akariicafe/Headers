@protocol VEKClipProtocol;

@interface VEKClipSuggestion : VEKRangeSuggestion

@property (retain, nonatomic) id<VEKClipProtocol> clip;

- (void).cxx_destruct;
- (id)description;
- (id)initWithClipToEmulate:(id)a0;

@end
