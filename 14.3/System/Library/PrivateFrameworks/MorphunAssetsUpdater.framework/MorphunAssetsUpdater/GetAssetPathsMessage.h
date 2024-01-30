@class NSObject;
@protocol OS_xpc_object;

@interface GetAssetPathsMessage : NSObject <Message>

@property (readonly) NSObject<OS_xpc_object> *message;

- (id)init;
- (void).cxx_destruct;
- (int)type;

@end
