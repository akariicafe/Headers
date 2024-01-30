@class NSError;

@interface __NSCFURLLocalStreamTaskWork : NSObject {
    const char *_static_description;
    double _timeout;
    double _timeoutTime;
    NSError *_recvdError;
    BOOL _hasBeenCalledBack;
    BOOL _timerStarted;
}

- (id)description;

@end
