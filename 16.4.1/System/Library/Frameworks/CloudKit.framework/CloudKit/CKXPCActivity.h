@class NSString, NSObject;
@protocol OS_xpc_object;

@interface CKXPCActivity : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSObject<OS_xpc_object> *criteria;
@property (readonly, nonatomic) BOOL shouldBeDataBudgeted;
@property (readonly, nonatomic) long long state;

- (void).cxx_destruct;
- (struct _xpc_activity_eligibility_changed_handler_s { } *)addEligibilityChangedHandler:(id /* block */)a0;
- (id)initWithXPCActivity:(id)a0;
- (void)removeEligibilityChangedHandler:(struct _xpc_activity_eligibility_changed_handler_s { } *)a0;

@end
