@class NSObject;
@protocol OS_xpc_object;

@interface SSXPCData : NSData

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcData;

- (const void *)bytes;
- (id)initWithXPCData:(id)a0;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
