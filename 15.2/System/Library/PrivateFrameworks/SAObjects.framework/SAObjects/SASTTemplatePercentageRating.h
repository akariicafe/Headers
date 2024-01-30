@class SAUIDecoratedText, SAUILocalImageResource;

@interface SASTTemplatePercentageRating : SASTTemplateRating

@property (retain, nonatomic) SAUILocalImageResource *localImageResource;
@property (retain, nonatomic) SAUIDecoratedText *value;

+ (id)templatePercentageRating;
+ (id)templatePercentageRatingWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
