@class NSObject;
@protocol OS_dispatch_queue;

@interface NPKGreenTeaDataUsageResolver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) BOOL currentlyResolving;

+ (void)resolveGreenTeaDataUsageIfNecessary;

- (id)init;
- (void).cxx_destruct;
- (void)_resolveGreenTeaDataUsageIfNecessaryWithCompletion:(id /* block */)a0;
- (void)resolveGreenTeaDataUsageIfNecessary;

@end
