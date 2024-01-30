@class NSString;

@interface SAUSTitleCardSection : SAUSCardSection

@property (copy, nonatomic) NSString *title;

+ (id)titleCardSectionWithDictionary:(id)a0 context:(id)a1;
+ (id)titleCardSection;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
