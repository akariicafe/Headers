@class NSArray, NSString;
@protocol CRKCardSectionViewProviderDelegate, CRCard, INUICKPViewControllerAllocating;

@interface INUICKPCardSectionViewProvider : NSObject <INUICKPViewControllerAllocatingDelegate, CRKIdentifiedCardSectionViewProviding>

@property (copy, nonatomic) NSArray *viewConfigurations;
@property (retain, nonatomic) id<INUICKPViewControllerAllocating> allocator;
@property (weak, nonatomic) id<CRKCardSectionViewProviderDelegate> cardSectionViewProviderDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<CRCard> card;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;

+ (id)_viewConfigurationsFromAllocator:(id)a0;
+ (void)requestInstanceFromDefaultAllocatorWithCard:(id)a0 delegate:(id)a1 reply:(id /* block */)a2;
+ (void)requestInstanceWithCard:(id)a0 delegate:(id)a1 allocator:(id)a2 reply:(id /* block */)a3;

@end
