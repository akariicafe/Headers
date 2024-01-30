@class NSArray, NSError, ATXResponse;

@interface ATXAppDirectoryResponse : NSObject

@property (readonly, nonatomic) ATXResponse *response;
@property (readonly, nonatomic) NSArray *recentAppsVisible;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *predictedApps;
@property (readonly, nonatomic) NSArray *recentApps;

- (void).cxx_destruct;
- (id)initWithResponse:(id)a0 recentApps:(id)a1 otherAppsOnScreen:(id)a2 numAppsToPredict:(unsigned long long)a3 error:(id)a4;
- (id)initWithoutDedupingForRecents:(id)a0 predictedApps:(id)a1 error:(id)a2;

@end
