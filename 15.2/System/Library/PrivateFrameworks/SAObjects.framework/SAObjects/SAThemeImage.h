@class NSString, NSData;

@interface SAThemeImage : SADomainObject

@property (copy, nonatomic) NSString *appearanceSetting;
@property (copy, nonatomic) NSData *dynamicImage;

+ (id)themeImage;
+ (id)themeImageWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
