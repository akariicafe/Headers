@interface SASTTemplateStarRating : SASTTemplateRating

@property (nonatomic) double maximumValue;
@property (nonatomic) double value;

+ (id)templateStarRating;
+ (id)templateStarRatingWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
