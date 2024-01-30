@class IMLocalObject, NSObject;
@protocol OS_xpc_object, OS_voucher;

@interface IMMessageContext : NSObject {
    BOOL _boost;
}

@property (retain) IMLocalObject *localObject;
@property (retain) id context;
@property BOOL shouldBoost;
@property (nonatomic) BOOL sync;
@property (nonatomic) BOOL reply;
@property (nonatomic) BOOL needReply;
@property (retain) NSObject<OS_xpc_object> *xpcMessage;
@property (retain) NSObject<OS_voucher> *voucher;

- (BOOL)isSync;
- (BOOL)isReply;
- (void).cxx_destruct;
- (id)init;

@end
