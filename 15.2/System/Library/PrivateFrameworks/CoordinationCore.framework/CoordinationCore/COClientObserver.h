@class NSObject, NSXPCConnection;
@protocol OS_os_transaction;

@interface COClientObserver : NSObject <NSCopying>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;

- (id)initWithConnection:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
