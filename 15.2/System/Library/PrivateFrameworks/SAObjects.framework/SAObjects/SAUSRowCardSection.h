@class SAUIImageResource, NSString;

@interface SAUSRowCardSection : SAUSCardSection

@property (retain, nonatomic) SAUIImageResource *image;
@property (nonatomic) BOOL imageIsRightAligned;
@property (copy, nonatomic) NSString *leftText;
@property (copy, nonatomic) NSString *rightText;

+ (id)rowCardSection;
+ (id)rowCardSectionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
