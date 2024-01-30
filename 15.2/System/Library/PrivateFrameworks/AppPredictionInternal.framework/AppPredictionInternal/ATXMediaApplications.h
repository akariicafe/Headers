@class NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface ATXMediaApplications : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_mediaApps;
}

- (BOOL)appSupportsMedia:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_updateMediaApps;

@end
