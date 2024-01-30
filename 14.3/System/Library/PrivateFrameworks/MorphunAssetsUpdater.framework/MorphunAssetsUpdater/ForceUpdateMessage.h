@class NSObject;
@protocol OS_xpc_object;

@interface ForceUpdateMessage : NSObject <Message>

@property (readonly) NSObject<OS_xpc_object> *message;

- (void).cxx_destruct;
- (int)type;
- (id)init:(id)a0 removeLanguages:(id)a1;

@end
