@class NSString, NSObject;
@protocol OS_xpc_object;

@interface IDSXPCConnectionWrapper : NSObject <IDSXPCConnectionProtocol> {
    NSObject<OS_xpc_object> *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
