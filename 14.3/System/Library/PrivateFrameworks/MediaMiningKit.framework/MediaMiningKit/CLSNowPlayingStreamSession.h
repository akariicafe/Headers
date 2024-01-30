@class NSArray, NSDate;

@interface CLSNowPlayingStreamSession : NSObject

@property (copy, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;

+ (id)playbackStreamSessionDateSortDescriptors;

- (void).cxx_destruct;
- (id)initWithEvents:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)initWithDataCluster:(id)a0;

@end
