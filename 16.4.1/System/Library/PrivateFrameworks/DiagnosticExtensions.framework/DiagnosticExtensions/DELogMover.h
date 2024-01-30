@class NSString, NSObject;
@protocol OS_xpc_object;

@interface DELogMover : NSObject {
    NSObject<OS_xpc_object> *_conn;
}

@property (readonly, nonatomic) NSString *serviceName;

+ (void)moveSystemLogsWithExtensions:(id)a0;

- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (BOOL)sendRequestReturningBooleanResponse:(id)a0 withSuccessKey:(char *)a1;

@end
