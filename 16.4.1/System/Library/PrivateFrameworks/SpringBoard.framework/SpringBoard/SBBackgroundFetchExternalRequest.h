@class SBBackgroundFetchTask, UIFetchContentInBackgroundAction;

@interface SBBackgroundFetchExternalRequest : NSObject {
    SBBackgroundFetchTask *_task;
}

@property (readonly, nonatomic) UIFetchContentInBackgroundAction *action;

- (void)execute;
- (void)dealloc;
- (id)initForAppInfo:(id)a0;
- (void).cxx_destruct;

@end
