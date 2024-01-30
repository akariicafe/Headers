@class NSObject;
@protocol OS_dispatch_queue;

@interface ICThumbnailGeneratorNote : ICThumbnailGenerator

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic) double maximumWidth;
@property (nonatomic) double margin;

- (id)initWithManagedObjectContext:(id)a0;
- (void).cxx_destruct;
- (id)generateThumbnailImageWithNote:(id)a0 configuration:(id)a1;
- (void)generateThumbnailWithConfiguration:(id)a0 completion:(id /* block */)a1;

@end
