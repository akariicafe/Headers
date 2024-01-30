@class NSString, NSArray, NSDictionary, NSNumber;

@interface EDAMAdParameters : FATObject

@property (retain, nonatomic) NSString *clientLanguage;
@property (retain, nonatomic) NSArray *impressions;
@property (retain, nonatomic) NSNumber *supportHtml;
@property (retain, nonatomic) NSDictionary *clientProperties;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
