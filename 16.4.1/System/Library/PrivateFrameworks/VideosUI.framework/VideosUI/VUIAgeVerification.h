@class NSNumber;

@interface VUIAgeVerification : NSObject

@property (retain, nonatomic) NSNumber *minTvRatingRequiringAgeVerification;
@property (retain, nonatomic) NSNumber *minMovieRatingRequiringAgeVerification;
@property (retain, nonatomic) id notificationToken;
@property (nonatomic) BOOL isAgeVerificationEnabled;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)configureAgeVerification:(id)a0;
- (void)performAgeGateVerificationWithRatingValue:(id)a0 ratingDomain:(id)a1 completion:(id /* block */)a2;

@end
