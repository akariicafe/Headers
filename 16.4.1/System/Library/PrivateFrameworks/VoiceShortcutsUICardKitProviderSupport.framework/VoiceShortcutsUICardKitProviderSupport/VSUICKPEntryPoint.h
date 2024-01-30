@class NSString;

@interface VSUICKPEntryPoint : NSObject <CRKIdentifiedProviding>

@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cardViewControllerForCard:(id)a0;
- (unsigned long long)displayPriorityForCard:(id)a0;

@end
