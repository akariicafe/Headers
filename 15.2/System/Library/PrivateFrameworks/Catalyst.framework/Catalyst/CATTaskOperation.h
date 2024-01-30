@class NSUUID, CATTaskRequest;
@protocol CATTaskOperationNotificationDelegate;

@interface CATTaskOperation : CATOperation

@property (copy, nonatomic) NSUUID *remoteUUID;
@property (readonly, nonatomic) CATTaskRequest *request;
@property (weak, nonatomic) id<CATTaskOperationNotificationDelegate> notificationDelegate;

+ (BOOL)isCancelable;
+ (id)new;
+ (BOOL)validateRequest:(id)a0 error:(id *)a1;

- (void)cat_addAssertion:(id)a0;
- (id)cat_assertions;
- (id)initWithRequest:(id)a0;
- (void)processMessage:(id)a0;
- (void)processNotificationWithName:(id)a0 userInfo:(id)a1;
- (BOOL)canSendNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)postNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (id)init;

@end
