@class NSString;

@interface AMSMockURLRequestComparator : NSObject <AMSURLRequestComparator>

@property (copy, nonatomic) id /* block */ criteriaBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCriteriaBlock:(id /* block */)a0;
- (BOOL)shouldOverrideURLRequest:(id)a0;

@end
