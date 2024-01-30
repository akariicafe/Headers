@class NSString;

@interface CKContainerCallbackProxy : CKWeakObjectCallbackProxy <CKXPCClient>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleSignificantIssueBehavior:(unsigned long long)a0 reason:(id)a1;
- (id)initWithContainer:(id)a0;

@end
