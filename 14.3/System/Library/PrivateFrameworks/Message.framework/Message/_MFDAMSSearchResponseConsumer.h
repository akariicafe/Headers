@class MFConditionLock, MFMailMessageStoreSearchResult, NSDate;

@interface _MFDAMSSearchResponseConsumer : _MFDAMSBasicConsumer <DASearchQueryConsumer> {
    MFConditionLock *doneCondition;
    double timeReceivedLastResponse;
    unsigned int totalCount;
}

@property (retain, nonatomic) NSDate *latestDateToAdd;
@property (readonly, nonatomic) NSDate *earliestDateAdded;
@property (readonly, nonatomic) MFMailMessageStoreSearchResult *searchResult;

- (void).cxx_destruct;
- (id)initWithMaximumSize:(unsigned int)a0 latency:(double)a1;
- (BOOL)handleItems:(id)a0;
- (void)resetDoneCondition;
- (BOOL)waitUntilDoneBeforeDate:(id)a0;
- (void)searchQuery:(id)a0 returnedResults:(id)a1;
- (void)searchQuery:(id)a0 finishedWithError:(id)a1;
- (void)searchQuery:(id)a0 returnedTotalCount:(id)a1;
- (void)waitUntilDone;

@end
