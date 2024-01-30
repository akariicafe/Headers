@class NSString, NSDictionary, NSObject;
@protocol OS_xpc_object;

@interface MRNotification : NSObject

@property (readonly, nonatomic) NSString *notification;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcMessage;

- (id)initWithNotification:(id)a0 userInfo:(id)a1;
- (void).cxx_destruct;

@end
