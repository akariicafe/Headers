@class NSString;

@interface SAUSTitleCardSection : SAUSCardSection

@property (copy, nonatomic) NSString *title;

+ (id)titleCardSection;
+ (id)titleCardSectionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
