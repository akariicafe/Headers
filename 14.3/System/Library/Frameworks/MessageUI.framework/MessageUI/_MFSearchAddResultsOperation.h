@class NSArray;
@protocol _MFSearchResultsConsumer;

@interface _MFSearchAddResultsOperation : NSOperation {
    id<_MFSearchResultsConsumer> _consumer;
    unsigned long long _type;
    NSArray *_results;
}

+ (id)operationWithResults:(id)a0 ofType:(unsigned long long)a1 consumer:(id)a2;

- (void).cxx_destruct;
- (void)main;

@end
