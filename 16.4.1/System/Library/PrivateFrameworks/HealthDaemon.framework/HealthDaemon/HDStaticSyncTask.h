@class NSUUID, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDStaticSyncTask : NSObject {
    HDProfile *_profile;
    unsigned long long _options;
    NSUUID *_storeIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)runWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 options:(unsigned long long)a1 storeIdentifier:(id)a2;

@end
