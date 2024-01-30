@class FCPrivateDataController;

@interface FCPrivateZoneFeedDescriptor : FCFeedDescriptor

@property (retain, nonatomic) FCPrivateDataController *privateDataController;

- (id)initWithIdentifier:(id)a0;
- (id)streamOfLatestHeadlinesWithContext:(id)a0;
- (void).cxx_destruct;
- (id)backingHeadlineIDs;
- (id)initWithPrivateDataController:(id)a0 identifier:(id)a1;

@end
