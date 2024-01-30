@class NSArray, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface ATXNotificationsContentAnalyzer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_ppnames;
    NSArray *_ppscores;
    NSDate *_lastUpdated;
}

- (id)analyzeContent:(id)a0;
- (BOOL)isExpired;
- (void)updateAnalyzers;
- (id)init;
- (void).cxx_destruct;

@end
