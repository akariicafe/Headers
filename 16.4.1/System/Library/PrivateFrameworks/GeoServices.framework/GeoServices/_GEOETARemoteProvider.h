@class NSObject;
@protocol OS_xpc_object;

@interface _GEOETARemoteProvider : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (copy, nonatomic) id /* block */ willSendRequestHandler;
@property (copy, nonatomic) id /* block */ finishedHandler;
@property (copy, nonatomic) id /* block */ networkActivityHandler;
@property (copy, nonatomic) id /* block */ errorHandler;

+ (id)provderWithWillSendRequest:(id /* block */)a0 finished:(id /* block */)a1 networkActivity:(id /* block */)a2 error:(id /* block */)a3;

- (void).cxx_destruct;

@end
