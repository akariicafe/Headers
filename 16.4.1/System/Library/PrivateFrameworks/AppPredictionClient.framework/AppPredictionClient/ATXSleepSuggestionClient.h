@class NSXPCConnection;

@interface ATXSleepSuggestionClient : NSObject <ATXSleepSuggestionInterface>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

- (void)predictedSleepSuggestionWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
