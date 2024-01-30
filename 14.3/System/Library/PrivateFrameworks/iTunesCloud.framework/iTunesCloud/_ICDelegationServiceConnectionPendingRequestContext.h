@class ICPBDGSRequest;

@interface _ICDelegationServiceConnectionPendingRequestContext : NSObject

@property (readonly, nonatomic) ICPBDGSRequest *request;
@property (readonly, copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 responseHandler:(id /* block */)a1;

@end
