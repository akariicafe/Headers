@class WFServiceConnection;

@interface NEWeatherServiceConnection : NSObject

@property (readonly, nonatomic) WFServiceConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (void)enqueueRequest:(id)a0;

@end
