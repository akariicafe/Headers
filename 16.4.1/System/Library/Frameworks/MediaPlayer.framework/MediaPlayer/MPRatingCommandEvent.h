@interface MPRatingCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) float rating;

- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
