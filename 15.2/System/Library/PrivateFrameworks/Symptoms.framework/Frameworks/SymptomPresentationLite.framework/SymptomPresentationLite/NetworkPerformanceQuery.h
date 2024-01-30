@class NSXPCConnection;

@interface NetworkPerformanceQuery : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (id)_formatInstantRouteMetrics:(id)a0;
- (void)dealloc;
- (BOOL)currentScorecardFor:(int)a0 queue:(id)a1 reply:(id /* block */)a2;

@end
