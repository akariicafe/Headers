@class NSString;

@interface ICRemoteRequestOperationExecuting : NSObject

@property (class, readonly, nonatomic) NSString *machServiceName;

+ (id)clientInterface;
+ (id)serviceInterface;

@end
