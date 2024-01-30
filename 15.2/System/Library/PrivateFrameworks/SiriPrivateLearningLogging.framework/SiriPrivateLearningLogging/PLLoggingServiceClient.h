@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface PLLoggingServiceClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSXPCConnection *clientConnection;

+ (id)makeClient;

- (void).cxx_destruct;
- (id)init;
- (void)storeInstrumentationWithEvents:(id)a0 completion:(id /* block */)a1;

@end
