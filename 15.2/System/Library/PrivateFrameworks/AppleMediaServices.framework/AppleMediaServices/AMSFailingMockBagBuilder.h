@class NSError;

@interface AMSFailingMockBagBuilder : AMSMockBagBuilder

@property (nonatomic) double delay;
@property (retain, nonatomic) NSError *error;

- (id)createMockBag;
- (void).cxx_destruct;

@end
