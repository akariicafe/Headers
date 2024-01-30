@class NSObject;
@protocol OS_xpc_object;

@interface CSIndexClientConnectionKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;

+ (id)keyWithConnection:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithConnection:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
