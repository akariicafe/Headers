@class NSObject;
@protocol OS_dispatch_queue;

@interface NPKGreenTeaDataUsageResolver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) BOOL currentlyResolving;

+ (void)resolveGreenTeaDataUsageIfNecessary;

- (void).cxx_destruct;
- (id)init;
- (void)resolveGreenTeaDataUsageIfNecessary;
- (void)_resolveGreenTeaDataUsageIfNecessaryWithCompletion:(id /* block */)a0;

@end
