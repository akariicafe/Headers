@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MRNotification : NSObject

@property (readonly, nonatomic) NSString *notification;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcMessage;

- (void).cxx_destruct;
- (id)initWithNotification:(id)a0 userInfo:(id)a1 queue:(id)a2;

@end
