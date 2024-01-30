@class NSString, CryptoHelper, IDSGroupSessionUnicastParameter, NSObject;
@protocol OS_nw_connection, OS_dispatch_queue, CPLinkDelegate;

@interface CPLink : NSObject <CPLinkProtocol, NSSecureCoding, NSCopying> {
    CryptoHelper *_cryptoHelper;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSObject<OS_nw_connection> *connection;
@property int connectionState;
@property (copy, nonatomic) IDSGroupSessionUnicastParameter *unicastParam;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *networkQueue;
@property (nonatomic) unsigned char linkType;
@property (weak, nonatomic) id<CPLinkDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_getIDSDataModelForLinkType:(unsigned char)a0;
+ (unsigned int)_trafficClassForLinkPriority:(unsigned int)a0;
+ (id)linkWithGroupSessionID:(id)a0 localParticipantID:(unsigned long long)a1 remoteParticipantID:(unsigned long long)a2 dataMode:(long long)a3 connectionIndex:(unsigned long long)a4;

- (BOOL)isReady;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)close;
- (void)_enableKeepAlive;
- (void).cxx_destruct;
- (BOOL)_isUnreliableLink;
- (void)_readData:(id)a0;
- (id)initWithUnicastParameter:(id)a0;
- (void)requestNWConnectionWithReply:(unsigned char)a0 completion:(id /* block */)a1;
- (void)resetTrafficPriority:(unsigned int)a0;
- (void)sendData:(id)a0 ofType:(unsigned char)a1 completion:(id /* block */)a2;
- (void)sendUnicastData:(id)a0 ofType:(unsigned char)a1 completion:(id /* block */)a2;

@end
