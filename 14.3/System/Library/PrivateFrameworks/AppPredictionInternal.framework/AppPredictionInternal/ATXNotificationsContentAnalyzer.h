@class NSArray, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface ATXNotificationsContentAnalyzer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_ppnames;
    NSArray *_ppscores;
    NSDate *_lastUpdated;
}

- (id)init;
- (BOOL)isExpired;
- (void).cxx_destruct;
- (void)updateAnalyzers;
- (id)analyzeContent:(id)a0;

@end
