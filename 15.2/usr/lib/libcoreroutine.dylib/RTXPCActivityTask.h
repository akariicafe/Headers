@class NSString, NSObject;
@protocol OS_xpc_object;

@interface RTXPCActivityTask : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly, copy, nonatomic) id /* block */ handler;

- (id)initWithIdentifier:(id)a0 activity:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
