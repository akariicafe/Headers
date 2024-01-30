@class NSString;

@interface _CRKBuiltInProvider : NSObject <CRKCardViewControllerDelegate, CRKIdentifiedProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;

- (unsigned long long)displayPriorityForCard:(id)a0;
- (id)cardViewControllerForCard:(id)a0;

@end
