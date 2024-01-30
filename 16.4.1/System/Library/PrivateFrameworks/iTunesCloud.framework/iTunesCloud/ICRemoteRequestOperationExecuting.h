@class NSString;

@interface ICRemoteRequestOperationExecuting : NSObject

@property (class, readonly, nonatomic) NSString *machServiceName;

+ (id)serviceInterface;
+ (id)clientInterface;

@end
