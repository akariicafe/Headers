@class NSString, LNAction;

@interface LNFetchMDMPropertiesConnectionOperation : LNInterfaceConnectionOperation

@property (readonly, nonatomic) LNAction *action;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)finishWithError:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 action:(id)a1 completionHandler:(id /* block */)a2;

@end
