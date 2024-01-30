@class NSXPCConnection;

@interface NetworkPerformanceQuery : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void)dealloc;
- (id)_formatInstantRouteMetrics:(id)a0;
- (BOOL)currentScorecardFor:(int)a0 queue:(id)a1 reply:(id /* block */)a2;

@end
