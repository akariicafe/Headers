@interface FCReadingHistoryFeedDescriptor : FCPrivateZoneFeedDescriptor

- (id)readingHistory;
- (id)name;
- (id)backingHeadlineIDs;
- (id)initWithPrivateDataController:(id)a0 identifier:(id)a1 feedType:(long long)a2;
- (id)initWithReadingHistory:(id)a0 identifier:(id)a1;

@end
