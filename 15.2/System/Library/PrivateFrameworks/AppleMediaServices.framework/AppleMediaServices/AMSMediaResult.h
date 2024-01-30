@class NSDictionary, NSArray;

@interface AMSMediaResult : AMSURLResult

@property (readonly, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic) NSArray *responseDataItems;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;

@end
