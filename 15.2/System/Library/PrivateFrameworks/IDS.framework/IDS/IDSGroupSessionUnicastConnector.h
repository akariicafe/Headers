@class NSString, NSData, NSObject;
@protocol OS_dispatch_queue, OS_nw_connection;

@interface IDSGroupSessionUnicastConnector : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *groupSessionIDAlias;
@property (readonly, nonatomic) unsigned long long participantIDAlias;
@property (retain, nonatomic) NSData *salt;
@property (readonly, nonatomic) long long dataMode;
@property (copy, nonatomic) id /* block */ connectionReadyCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_nw_connection> *cachedConnection;

+ (void)requestNWConnectionWithDataBlob:(id)a0 completionHandler:(id /* block */)a1;
+ (id)realTimeContext;
+ (id)extractDictionaryFromDataBlobFrom:(id)a0 error:(id *)a1;
+ (void)requestNWConnectionToVirtualParticipant:(unsigned long long)a0 forSession:(id)a1 completionHandler:(id /* block */)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithGroupSessionIDAlias:(id)a0 participantIDAlias:(unsigned long long)a1 salt:(id)a2 dataMode:(long long)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)requestDataBlob:(id /* block */)a0;
- (id)createDataBlobFrom:(id)a0 port:(unsigned short)a1;
- (id)initWithGroupSessionID:(id)a0 participantID:(unsigned long long)a1 dataMode:(long long)a2;
- (void)listenForIncomingConnection:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
