@class NSArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface PPQuickTypeCachedNameLookup : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (retain, nonatomic) NSArray *candidates;

- (void).cxx_destruct;

@end
