@class NSObject;
@protocol OS_xpc_object, IDSXPCConnectionProtocol;

@interface _IDSXPCCheckInInfo : NSObject

@property (retain, nonatomic) id<IDSXPCConnectionProtocol> connection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *tempObject;
@property (nonatomic) BOOL finishedTransaction;

- (void).cxx_destruct;

@end
