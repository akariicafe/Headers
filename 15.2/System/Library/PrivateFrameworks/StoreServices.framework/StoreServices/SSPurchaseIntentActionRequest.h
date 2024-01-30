@class NSString;

@interface SSPurchaseIntentActionRequest : SSRequest <SSXPCCoding>

@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) unsigned long long action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
