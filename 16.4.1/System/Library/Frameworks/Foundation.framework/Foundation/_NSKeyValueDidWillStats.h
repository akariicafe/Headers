@class NSThread;

@interface _NSKeyValueDidWillStats : NSObject {
    long long _count;
    BOOL _hasDecreased;
    struct { BOOL hasBecomeReentrant; BOOL hasExcessiveDids; BOOL hasWillDidThreadMismatch; } _detectedIssues;
    NSThread *_originalThread;
}

- (void)dealloc;
- (void)_recordThread;

@end
