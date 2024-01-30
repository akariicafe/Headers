@class NSArray;

@interface WBSTrackedFirstParty : WBSTrackingCapableFirstParty

@property (copy, nonatomic) NSArray *trackers;

- (id)initWithDomain:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 trackers:(id)a1;

@end
