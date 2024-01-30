@class CollationCore, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, OS_os_log;

@interface Collation : NSObject

@property (retain, nonatomic) CollationCore *ccore;
@property (retain, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (retain, nonatomic) NSObject<OS_xpc_object> *client_con;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dq;
@property (retain, nonatomic) NSObject<OS_os_log> *log;

- (id)initForUser:(unsigned int)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
