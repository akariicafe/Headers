@class NSString, NSPredicate;

@interface CPAnalyticsConditional : NSObject

@property (readonly, nonatomic) NSString *property;
@property (readonly, nonatomic) NSPredicate *predicate;

- (void).cxx_destruct;
- (id)_validateAndParseConfig:(id)a0 forKey:(id)a1;
- (id)initWithConfig:(id)a0;

@end
