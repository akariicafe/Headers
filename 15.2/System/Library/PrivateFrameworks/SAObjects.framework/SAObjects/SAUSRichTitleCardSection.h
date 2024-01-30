@class NSString, SAUIImageResource;

@interface SAUSRichTitleCardSection : SAUSTitleCardSection

@property (nonatomic) BOOL centered;
@property (copy, nonatomic) NSString *contentRatingText;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) SAUIImageResource *titleImage;

+ (id)richTitleCardSection;
+ (id)richTitleCardSectionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
