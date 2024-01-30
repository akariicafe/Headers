@class HMFLocationAuthorization, NSOperationQueue;

@interface HMMutableHomeManagerConfiguration : HMHomeManagerConfiguration {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) HMFLocationAuthorization *locationAuthorization;
@property unsigned long long cachePolicy;
@property unsigned long long options;
@property (getter=isDiscretionary) BOOL discretionary;
@property (getter=isAdaptive) BOOL adaptive;
@property (retain) NSOperationQueue *delegateQueue;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldConnect;

@end
