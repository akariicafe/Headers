@class FCPrivateDataController;

@interface FCPrivateZoneFeedDescriptor : FCFeedDescriptor

@property (retain, nonatomic) FCPrivateDataController *privateDataController;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)backingHeadlineIDs;
- (id)initWithPrivateDataController:(id)a0 identifier:(id)a1;
- (id)streamOfLatestHeadlinesWithContext:(id)a0;

@end
