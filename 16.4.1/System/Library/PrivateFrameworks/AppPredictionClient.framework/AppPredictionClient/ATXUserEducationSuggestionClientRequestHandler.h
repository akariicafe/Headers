@class ATXUserEducationSuggestionClient;

@interface ATXUserEducationSuggestionClientRequestHandler : NSObject <ATXUserEducationSuggestionClientXPCInterface> {
    ATXUserEducationSuggestionClient *_client;
}

- (id)initWithClient:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didReceiveUserEducationSuggestionEvent:(id)a0;

@end
