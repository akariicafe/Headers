@class NSDictionary, SKUIReviewMetadata;

@interface SKUIPostReviewOperation : ISOperation {
    NSDictionary *_responseDictionary;
    SKUIReviewMetadata *_review;
}

@property (readonly) NSDictionary *responseDictionary;

- (void)run;
- (void).cxx_destruct;
- (id)_httpBody;
- (id)initWithReviewMetadata:(id)a0;

@end
