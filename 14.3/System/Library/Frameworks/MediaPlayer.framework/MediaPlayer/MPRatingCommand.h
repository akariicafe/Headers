@interface MPRatingCommand : MPRemoteCommand

@property (nonatomic) float minimumRating;
@property (nonatomic) float maximumRating;

- (id)newCommandEventWithRating:(float)a0;
- (id)_mediaRemoteCommandInfoOptions;

@end
