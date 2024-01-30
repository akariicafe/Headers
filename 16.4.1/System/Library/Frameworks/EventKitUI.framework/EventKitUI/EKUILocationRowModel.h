@class EKVirtualConference, UITableViewCell, EKStructuredLocation;

@interface EKUILocationRowModel : NSObject

@property (nonatomic) unsigned long long locationType;
@property (retain, nonatomic) EKStructuredLocation *location;
@property (retain, nonatomic) EKVirtualConference *conference;
@property (retain, nonatomic) UITableViewCell *cell;

- (id)description;
- (void).cxx_destruct;
- (id)initWithStructuredLocation:(id)a0;
- (id)initWithConferenceRoom:(id)a0;
- (id)initWithPendingConference:(id)a0;
- (id)initWithSuggestedLocation:(id)a0;
- (id)initWithType:(unsigned long long)a0 location:(id)a1 conference:(id)a2;
- (id)initWithVirtualConference:(id)a0;

@end
