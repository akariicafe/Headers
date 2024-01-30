@class NSString, NSObject;
@protocol OS_xpc_object;

@interface HDSPXPCActivity : NSObject <HDSPActivity>

@property (readonly, nonatomic) NSObject<OS_xpc_object> *criteria;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
