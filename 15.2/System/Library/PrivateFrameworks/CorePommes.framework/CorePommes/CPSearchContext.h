@class NSString, NSArray;

@interface CPSearchContext : NSObject

@property (nonatomic) long long maxResults;
@property (nonatomic) NSString *searchParamStr;
@property (nonatomic, getter=isTopHitQuery) BOOL topHitQuery;
@property (copy) NSArray *protectionClasses;

- (unsigned long long)options;
- (void).cxx_destruct;

@end
