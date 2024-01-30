@class NSString, NSDate;

@interface DeviceContext : INObject

@property (nonatomic, readonly) NSString *description;
@property (copy, nonatomic) NSString *routeId;
@property (nonatomic) long long proximity;
@property (nonatomic) long long nowPlayingState;
@property (copy, nonatomic) NSDate *nowPlayingTimestamp;
@property (nonatomic) long long nowPlayingMediaType;
@property (copy, nonatomic) NSString *groupId;

- (BOOL)isEqual:(id)a0;

@end
