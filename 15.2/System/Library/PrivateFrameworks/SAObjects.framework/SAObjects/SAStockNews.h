@class NSString, NSDate;

@interface SAStockNews : SADomainObject

@property (copy, nonatomic) NSDate *timeStamp;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *url;

+ (id)news;
+ (id)newsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
