@class NSString, SSPurchaseRequest;

@interface MCSSPurchaseRequestDelegate : MCSSRequestDelegate <SSPurchaseRequestDelegate>

@property (readonly, retain, nonatomic) SSPurchaseRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithPurchases:(id)a0;

- (void)startCompletionBlock:(id /* block */)a0;

@end
