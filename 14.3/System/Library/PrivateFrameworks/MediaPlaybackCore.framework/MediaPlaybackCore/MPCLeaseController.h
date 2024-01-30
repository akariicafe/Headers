@class MPCMediaFoundationTranslator, _MPCLeaseManager;

@interface MPCLeaseController : NSObject <MFLeaseControlling>

@property (readonly, nonatomic) MPCMediaFoundationTranslator *translator;
@property (readonly, nonatomic) _MPCLeaseManager *leaseManager;

- (void).cxx_destruct;
- (id)initWithTranslator:(id)a0 leaseManager:(id)a1;
- (void)requestLeaseForItem:(id)a0 completion:(id /* block */)a1;
- (void)relinquishLeaseForItem:(id)a0 completion:(id /* block */)a1;

@end
