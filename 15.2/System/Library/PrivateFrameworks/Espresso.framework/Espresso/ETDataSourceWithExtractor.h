@class ETImageDescriptorExtractor;
@protocol ETDataSource;

@interface ETDataSourceWithExtractor : NSObject <ETDataSource> {
    id<ETDataSource> _source;
    ETImageDescriptorExtractor *_extractor;
}

- (id)dataPointAtIndex:(int)a0;
- (id)initWithDataSource:(id)a0 extractor:(id)a1;
- (void).cxx_destruct;
- (int)numberOfDataPoints;

@end
