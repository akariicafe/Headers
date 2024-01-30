@class NSObject;
@protocol OS_dispatch_group;

@interface brc_task_tracker : NSObject {
    char *label;
    NSObject<OS_dispatch_group> *group;
    _Atomic BOOL cancelled;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
