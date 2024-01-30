@class SBBackgroundFetchTask, UIFetchContentInBackgroundAction;

@interface SBBackgroundFetchExternalRequest : NSObject {
    SBBackgroundFetchTask *_task;
}

@property (readonly, nonatomic) UIFetchContentInBackgroundAction *action;

- (void)execute;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initForBundleID:(id)a0;

@end
