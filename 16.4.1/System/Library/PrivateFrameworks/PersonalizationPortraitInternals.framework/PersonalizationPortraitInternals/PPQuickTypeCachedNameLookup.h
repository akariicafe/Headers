@class NSArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface PPQuickTypeCachedNameLookup : NSObject {
    NSObject<OS_dispatch_semaphore> *_sem;
    NSArray *_candidates;
}

- (void).cxx_destruct;

@end
