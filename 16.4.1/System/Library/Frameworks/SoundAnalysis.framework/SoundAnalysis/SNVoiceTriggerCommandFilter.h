@class NSString, NSMutableArray;

@interface SNVoiceTriggerCommandFilter : NSObject {
    long long _maxHistoryLength;
    double _confidenceThreshold;
    int _streak;
    NSString *_name;
    NSMutableArray *_history;
}

- (void).cxx_destruct;

@end
