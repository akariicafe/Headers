@class NSXPCConnection;

@interface ATXDefaultWidgetSuggesterClient : NSObject {
    NSXPCConnection *_xpcConnection;
}

+ (BOOL)shouldSuggestTVWithAppLaunchCount:(double)a0 intentDonationCount:(double)a1 upcomingMediaCount:(double)a2;

- (void).cxx_destruct;
- (id)init;
- (void)logEventForDefaultWidgetSuggestionType:(long long)a0 event:(long long)a1;
- (void)defaultWidgetSuggestionOfType:(long long)a0 completionHandler:(id /* block */)a1;

@end
