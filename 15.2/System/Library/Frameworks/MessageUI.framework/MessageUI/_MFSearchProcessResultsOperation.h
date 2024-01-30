@protocol _MFSearchResultsConsumer;

@interface _MFSearchProcessResultsOperation : NSOperation {
    id<_MFSearchResultsConsumer> _consumer;
    unsigned long long _type;
    id /* block */ _completionBlock;
}

+ (id)operationWithResultsOfType:(unsigned long long)a0 completion:(id /* block */)a1 consumer:(id)a2;

- (void)main;
- (void).cxx_destruct;

@end
