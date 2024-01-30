@class PXStateBasedMemoriesDataSource;

@interface _PXStoryMemoryForYouDataSource : NSObject {
    PXStateBasedMemoriesDataSource *_dataSource;
}

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;

@end
