@class NSString;

@interface IMDMessageRecordBatchFetcher : IMDRecordBatchFetcher

@property (readonly, copy, nonatomic) NSString *associatedChatGUID;

- (void).cxx_destruct;
- (id)initWithAssociatedChatGUID:(id)a0;
- (id)nextBatchWithSize:(unsigned long long)a0;

@end
