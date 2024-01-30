@class NSNumber, NSData, NSString;

@interface SSMachineDataRequest : SSRequest <SSXPCCoding> {
    NSNumber *_accountID;
    NSData *_actionData;
    NSString *_actionName;
    BOOL _allowsBootstrapCellularData;
    long long _protocolVersion;
    NSString *_userAgent;
    BOOL _waitsForPurchaseOperations;
}

@property (copy) NSNumber *accountIdentifier;
@property (copy) NSData *actionData;
@property (copy) NSString *actionName;
@property BOOL allowsBootstrapCellularData;
@property long long protocolVersion;
@property (copy) NSString *userAgent;
@property BOOL waitsForPurchaseOperations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURLResponse:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void)startWithDetailedCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)startWithCompletionBlock:(id /* block */)a0;

@end
