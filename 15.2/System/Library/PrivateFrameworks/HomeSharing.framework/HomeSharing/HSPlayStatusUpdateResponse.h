@class NSDictionary;

@interface HSPlayStatusUpdateResponse : HSResponse

@property (nonatomic) unsigned int nextRevisionID;
@property (nonatomic) unsigned long long nowPlayingContainerID;
@property (nonatomic) unsigned long long nowPlayingContainerItemID;
@property (nonatomic) unsigned long long nowPlayingDatabaseID;
@property (nonatomic) unsigned long long nowPlayingItemID;
@property (copy, nonatomic) NSDictionary *playStatusInformation;

- (id)description;
- (void).cxx_destruct;

@end
