@interface FCReadingHistoryFeedDescriptor : FCPrivateZoneFeedDescriptor

- (id)backingHeadlineIDs;
- (id)initWithPrivateDataController:(id)a0 identifier:(id)a1;
- (id)initWithReadingHistory:(id)a0 identifier:(id)a1;
- (id)name;
- (id)readingHistory;

@end
