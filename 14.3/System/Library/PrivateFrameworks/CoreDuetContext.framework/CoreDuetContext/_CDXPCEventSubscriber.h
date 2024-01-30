@class NSString, NSObject;
@protocol OS_xpc_object;

@interface _CDXPCEventSubscriber : NSObject

@property (readonly, nonatomic) unsigned long long token;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *descriptor;
@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) NSString *streamName;
@property (readonly, nonatomic) NSString *clientIdentifier;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithToken:(unsigned long long)a0 descriptor:(id)a1 userID:(unsigned int)a2 streamName:(id)a3;

@end
