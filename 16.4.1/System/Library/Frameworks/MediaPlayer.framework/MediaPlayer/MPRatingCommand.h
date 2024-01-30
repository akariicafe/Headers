@interface MPRatingCommand : MPRemoteCommand

@property (nonatomic) float minimumRating;
@property (nonatomic) float maximumRating;

- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithRating:(float)a0;

@end
