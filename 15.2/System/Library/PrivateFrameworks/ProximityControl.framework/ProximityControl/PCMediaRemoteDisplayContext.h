@class NSString, MRNowPlayingPlayerResponse;

@interface PCMediaRemoteDisplayContext : PCDisplayContext

@property (copy, nonatomic) NSString *mediaRemoteID;
@property (copy, nonatomic) MRNowPlayingPlayerResponse *proxDeviceState;
@property (copy, nonatomic) MRNowPlayingPlayerResponse *selectedDeviceState;
@property (copy, nonatomic) MRNowPlayingPlayerResponse *localDeviceState;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)userActivityInfo;

@end
