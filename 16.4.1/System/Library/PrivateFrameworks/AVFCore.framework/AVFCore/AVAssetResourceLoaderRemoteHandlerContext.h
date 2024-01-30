@class NSObject;
@protocol OS_xpc_object;

@interface AVAssetResourceLoaderRemoteHandlerContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly, nonatomic) unsigned long long customURLHandlerObjectID;
@property (readonly, nonatomic) unsigned long long authHandlerObjectID;
@property (readonly, nonatomic) unsigned long long contentKeySessionHandlerObjectID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithEndpoint:(id)a0 customURLHandlerObjectID:(unsigned long long)a1 authHandlerObjectID:(unsigned long long)a2 contentKeySessionHandlerObjectID:(unsigned long long)a3;

@end
