@class NSString;

@interface AMSMockURLRequestComparator : NSObject <AMSURLRequestComparator>

@property (copy, nonatomic) id /* block */ criteriaBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)shouldOverrideURLRequest:(id)a0;
- (id)initWithCriteriaBlock:(id /* block */)a0;

@end
