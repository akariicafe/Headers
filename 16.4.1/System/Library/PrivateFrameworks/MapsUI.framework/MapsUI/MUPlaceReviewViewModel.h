@class NSString, MUPlaceReviewAvatarGenerator, NSDate;
@protocol MKMapItemProviderRatingSnippet;

@interface MUPlaceReviewViewModel : NSObject {
    id<MKMapItemProviderRatingSnippet> _ratingSnippet;
    MUPlaceReviewAvatarGenerator *_avatarGenerator;
}

@property (readonly, nonatomic) NSString *reviewText;
@property (readonly, nonatomic) double normalizedScore;
@property (readonly, nonatomic) NSString *authorText;
@property (readonly, nonatomic) NSDate *reviewDate;

- (void).cxx_destruct;
- (id)initWithRatingSnippet:(id)a0 avatarGenerator:(id)a1;
- (void)loadUserIconWithPointSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;

@end
