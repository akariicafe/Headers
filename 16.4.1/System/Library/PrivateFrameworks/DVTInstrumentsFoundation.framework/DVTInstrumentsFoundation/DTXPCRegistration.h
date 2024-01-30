@class NSString, NSObject;
@protocol OS_xpc_object;

@interface DTXPCRegistration : NSObject

@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) id /* block */ oneshotHandler;
@property (retain, nonatomic) id client;
@property (retain, nonatomic) id pkHandle;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcObject;

- (void).cxx_destruct;

@end
