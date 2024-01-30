@class NSString;

@interface EDQueryCreator : NSObject

@property (readonly, nonatomic) NSString *queryType;

- (id)queryWithStartDate:(id)a0 endDate:(id)a1;
- (void).cxx_destruct;
- (id)initWithQueryType:(id)a0;

@end
