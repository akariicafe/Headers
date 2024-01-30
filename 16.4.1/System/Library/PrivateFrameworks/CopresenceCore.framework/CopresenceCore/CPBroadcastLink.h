@class NSString, CryptoHelper, IDSGroupSessionBroadcastParameter, NSObject;
@protocol OS_nw_connection, OS_dispatch_queue, CPLinkDelegate;

@interface CPBroadcastLink : NSObject <CPLinkProtocol, NSSecureCoding> {
    CryptoHelper *_cryptoHelper;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSObject<OS_nw_connection> *connection;
@property int connectionState;
@property (copy, nonatomic) IDSGroupSessionBroadcastParameter *broadcastParam;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *networkQueue;
@property (weak, nonatomic) id<CPLinkDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isReady;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)_readData:(id)a0;
- (void)broadcastUnreliableData:(id)a0 completion:(id /* block */)a1;
- (id)initWithBroadcastParam:(id)a0;
- (void)requestNWConnectionWithReply:(id /* block */)a0;

@end
