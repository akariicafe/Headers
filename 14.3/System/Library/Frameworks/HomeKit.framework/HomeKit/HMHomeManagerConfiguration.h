@class NSURL, HMFLocationAuthorization, NSOperationQueue;

@interface HMHomeManagerConfiguration : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) BOOL shouldConnect;
@property (readonly) BOOL canUseCache;
@property (readonly) NSURL *cacheURL;
@property (readonly) HMFLocationAuthorization *locationAuthorization;
@property (readonly) unsigned long long options;
@property (readonly, getter=isDiscretionary) BOOL discretionary;
@property (readonly, getter=isAdaptive) BOOL adaptive;
@property (readonly) NSOperationQueue *delegateQueue;

+ (id)defaultConfiguration;
+ (id)defaultPrivateConfiguration;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOptions:(unsigned long long)a0 cachePolicy:(unsigned long long)a1;

@end
