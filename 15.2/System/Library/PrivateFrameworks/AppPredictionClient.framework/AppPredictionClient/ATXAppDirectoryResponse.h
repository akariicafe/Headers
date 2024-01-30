@class NSArray, NSMutableDictionary, ATXSuggestionLayout, ATXResponse, NSError;

@interface ATXAppDirectoryResponse : NSObject {
    NSMutableDictionary *_bundleIdToSuggestionMapping;
}

@property (readonly, nonatomic) ATXResponse *response;
@property (readonly, nonatomic) ATXSuggestionLayout *suggestionLayout;
@property (readonly, nonatomic) NSArray *recentAppsVisible;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *predictedApps;
@property (readonly, nonatomic) NSArray *recentApps;

- (id)initWithSuggestionLayout:(id)a0 recentApps:(id)a1 otherAppsOnScreen:(id)a2 numAppsToPredict:(unsigned long long)a3 error:(id)a4;
- (id)uuidsForBundleIds:(id)a0;
- (id)initWithResponse:(id)a0 recentApps:(id)a1 otherAppsOnScreen:(id)a2 numAppsToPredict:(unsigned long long)a3 error:(id)a4;
- (id)proactiveSuggestionForBundleId:(id)a0;
- (void).cxx_destruct;
- (id)uuidForBundleId:(id)a0;
- (id)initWithoutDedupingForRecents:(id)a0 predictedApps:(id)a1 error:(id)a2;

@end
