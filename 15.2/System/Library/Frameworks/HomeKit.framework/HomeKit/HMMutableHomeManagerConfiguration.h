@class HMFLocationAuthorization, NSOperationQueue;
@protocol HMFLocking;

@interface HMMutableHomeManagerConfiguration : HMHomeManagerConfiguration {
    id<HMFLocking> _lock;
}

@property (retain) HMFLocationAuthorization *locationAuthorization;
@property unsigned long long cachePolicy;
@property unsigned long long options;
@property (getter=isDiscretionary) BOOL discretionary;
@property (getter=isAdaptive) BOOL adaptive;
@property (retain) NSOperationQueue *delegateQueue;

- (id)initWithOptions:(unsigned long long)a0 cachePolicy:(unsigned long long)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldConnect;

@end
