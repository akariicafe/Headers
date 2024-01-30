@class NSData, NSString, NSURL;

@interface MCFontPayload : MCPayload

@property (retain, nonatomic) NSData *fontData;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSURL *persistentURL;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)title;
- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (void).cxx_destruct;
- (id)verboseDescription;

@end
