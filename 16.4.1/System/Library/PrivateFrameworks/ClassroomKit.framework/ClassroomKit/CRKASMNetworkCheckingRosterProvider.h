@class CATNetworkReachability;

@interface CRKASMNetworkCheckingRosterProvider : CRKASMRosterProviderDecoratorBase

@property (readonly, nonatomic) CATNetworkReachability *networkReachability;

+ (id)reachabilityError;

- (void).cxx_destruct;
- (void)createCourseWithProperties:(id)a0 completion:(id /* block */)a1;
- (id)initWithRosterProvider:(id)a0;
- (void)removeCourseWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)updateCourseWithIdentifier:(id)a0 properties:(id)a1 completion:(id /* block */)a2;

@end
