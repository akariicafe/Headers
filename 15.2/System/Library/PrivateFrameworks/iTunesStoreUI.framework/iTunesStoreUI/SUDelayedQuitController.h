@class NSMutableArray;

@interface SUDelayedQuitController : NSObject {
    long long _delayTerminateCount;
    NSMutableArray *_longLivedViewControllers;
}

+ (id)sharedInstance;
+ (void)beginDelayingTerminate;
+ (void)endDelayingTerminate;
+ (BOOL)isDelayingTerminate;
+ (void)checkInLongLivedViewController:(id)a0;
+ (void)checkOutLongLivedViewController:(id)a0;
+ (BOOL)viewControllerIsLongLived:(id)a0;
+ (id)checkedInViewControllerOfClass:(Class)a0;

- (void)dealloc;
- (void)_checkInLongLivedViewController:(id)a0;
- (void)_checkOutLongLivedViewController:(id)a0;
- (BOOL)_viewControllerIsLongLived:(id)a0;
- (id)_checkedInViewControllerOfClass:(Class)a0;
- (BOOL)_isDelayingTerminate;
- (void)_beginDelayingTerminate;
- (void)_endDelayingTerminate;

@end
