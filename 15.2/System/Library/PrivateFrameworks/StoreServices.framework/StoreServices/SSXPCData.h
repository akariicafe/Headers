@class NSObject;
@protocol OS_xpc_object;

@interface SSXPCData : NSData

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcData;

- (unsigned long long)length;
- (id)initWithXPCData:(id)a0;
- (const void *)bytes;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
