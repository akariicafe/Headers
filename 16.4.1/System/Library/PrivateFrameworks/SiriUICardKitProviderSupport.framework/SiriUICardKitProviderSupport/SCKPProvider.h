@class NSString;

@interface SCKPProvider : NSObject <CRKIdentifiedProviding>

@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)requestIdentifiedCardSectionViewProviderForCard:(id)a0 delegate:(id)a1 reply:(id /* block */)a2;
- (void)requestCardSectionViewProviderForCard:(id)a0 delegate:(id)a1 reply:(id /* block */)a2;

@end
