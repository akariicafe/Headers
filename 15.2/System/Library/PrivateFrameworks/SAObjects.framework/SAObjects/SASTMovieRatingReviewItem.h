@class SAUIDecoratedText, SASTTemplatePercentageRating, NSString;

@interface SASTMovieRatingReviewItem : AceObject <SASTTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAUIDecoratedText *reviews;
@property (retain, nonatomic) SASTTemplatePercentageRating *templatePercentageRating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)movieRatingReviewItem;
+ (id)movieRatingReviewItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
