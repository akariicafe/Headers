@class NSString, CUBonjourBrowser, SFSession, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDSBonjourTest : NSObject {
    CUBonjourBrowser *_browser;
    NSString *_testID;
    unsigned long long _startTicks;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _invalidateCalled;
}

@property (retain, nonatomic) SFSession *sfSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) double metricTotalSeconds;
@property (readonly, nonatomic) int bonjourTestState;
@property (nonatomic) double timeout;

- (void)_complete;
- (void)_handleTimeout;
- (id)init;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_handleFoundDevice:(id)a0;

@end
