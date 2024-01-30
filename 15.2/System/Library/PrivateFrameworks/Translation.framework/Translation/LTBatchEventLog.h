@interface LTBatchEventLog : NSObject

- (id)initWithRequest:(id)a0;
- (void)endSuccessfully;
- (void)endWithError:(id)a0 failedParagraphs:(unsigned long long)a1;
- (void)startWithParagraphCount:(unsigned long long)a0;
- (id)makeContext;
- (void)sendWithContext:(id)a0;
- (void)cancelWithReason:(id)a0;

@end
