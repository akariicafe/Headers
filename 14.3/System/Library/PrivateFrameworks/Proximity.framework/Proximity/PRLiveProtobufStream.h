@class NSString, NSXPCConnection, NSUUID, NSObject;
@protocol PRLiveProtobufStreamDelegate, OS_dispatch_queue;

@interface PRLiveProtobufStream : NSObject <PRProtobufClientProtocol> {
    NSXPCConnection *_conn;
    NSUUID *_uniqueId;
}

@property (weak, nonatomic) id<PRLiveProtobufStreamDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (id)server;
- (void)start;
- (void)invalidate;
- (void)consumeProtobufBytes:(id)a0;
- (void)getUniqueClientIdentifier:(id /* block */)a0;

@end
