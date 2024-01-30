@class NSData, ICStoreRequestContext;

@interface ICMachineDataOperation : ICAsyncOperation

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) ICStoreRequestContext *requestContext;
@property (nonatomic) long long protocolVersion;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;

@end
