@protocol PXLayoutPerformer;

@interface PXLayoutPerformerCacheEntry : NSObject

@property (retain, nonatomic) id<PXLayoutPerformer> performer;
@property (nonatomic) unsigned long long reentryCount;

- (void).cxx_destruct;

@end
