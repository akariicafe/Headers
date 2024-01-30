@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface PLLoggingServiceClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSXPCConnection *clientConnection;

+ (id)makeClient;

- (id)init;
- (void).cxx_destruct;
- (void)storeInstrumentationWithEvents:(id)a0 completion:(id /* block */)a1;

@end
