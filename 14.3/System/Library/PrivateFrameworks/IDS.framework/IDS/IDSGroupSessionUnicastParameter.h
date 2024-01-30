@class NSString, NSObject;
@protocol OS_nw_endpoint, OS_nw_parameters;

@interface IDSGroupSessionUnicastParameter : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *groupSessionID;
@property (readonly, nonatomic) unsigned long long localParticipantID;
@property (readonly, nonatomic) unsigned long long remoteParticipantID;
@property (readonly, nonatomic) unsigned long long connectionIndex;
@property (readonly, nonatomic) long long dataMode;
@property (readonly, nonatomic) NSObject<OS_nw_parameters> *parameters;
@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint;
@property int socket;

+ (id)realTimeContext;

- (void)_setUpNWConnectionforTesting:(id /* block */)a0;
- (id)initWithConnectedSocket:(int)a0 dataMode:(long long)a1 connectionIndex:(unsigned long long)a2;
- (void)requestNWConnectionforIDSGroupSessionUnicastParameter:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_requestNWConnectionforIDSGroupSessionUnicastParameter:(id /* block */)a0;
- (id)initWithGroupSessionID:(id)a0 localParticipantID:(unsigned long long)a1 remoteParticipantID:(unsigned long long)a2 dataMode:(long long)a3 connectionIndex:(unsigned long long)a4;
- (void)encodeWithCoder:(id)a0;

@end
