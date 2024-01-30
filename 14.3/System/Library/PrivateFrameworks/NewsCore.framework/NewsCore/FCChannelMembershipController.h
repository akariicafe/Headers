@class FCChannelMembershipRecordSource;

@interface FCChannelMembershipController : NSObject

@property (readonly, nonatomic) FCChannelMembershipRecordSource *recordSource;

- (void).cxx_destruct;
- (id)cachedChannelMembershipsForIDs:(id)a0;
- (id)initWithChannelMembershipRecordSource:(id)a0;
- (id)channelMembershipsFromHeldRecords:(id)a0;
- (void)fetchChannelMembershipsForIDs:(id)a0 maximumCachedAge:(double)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;

@end
