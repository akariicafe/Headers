@class NSObject;
@protocol OS_xpc_object;

@interface AVAssetResourceLoaderRemoteHandlerContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly, nonatomic) int clientPid;
@property (readonly, nonatomic) unsigned long long customURLHandlerObjectID;
@property (readonly, nonatomic) unsigned long long authHandlerObjectID;
@property (readonly, nonatomic) unsigned long long contentKeySessionHandlerObjectID;

- (id)initWithEndpoint:(id)a0 clientPid:(int)a1 customURLHandlerObjectID:(unsigned long long)a2 authHandlerObjectID:(unsigned long long)a3 contentKeySessionHandlerObjectID:(unsigned long long)a4;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
