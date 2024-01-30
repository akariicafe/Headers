@class NSString;

@interface QuickWebsiteSearchQuery : NSObject

@property (readonly, nonatomic) NSString *websiteNamePrefix;
@property (readonly, nonatomic) NSString *searchTerms;

- (void).cxx_destruct;
- (id)initWithUserEnteredString:(id)a0;

@end
