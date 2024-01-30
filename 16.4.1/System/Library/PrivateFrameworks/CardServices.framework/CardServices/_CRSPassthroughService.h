@class NSString;

@interface _CRSPassthroughService : NSObject <CRSCardServing, CRSIdentifiedServing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *serviceIdentifier;

- (BOOL)canSatisfyCardRequest:(id)a0;
- (void)requestCard:(id)a0 reply:(id /* block */)a1;
- (unsigned long long)servicePriorityForRequest:(id)a0;

@end
