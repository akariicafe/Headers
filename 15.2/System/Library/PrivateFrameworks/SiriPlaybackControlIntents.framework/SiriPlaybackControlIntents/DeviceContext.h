@class NSString, NSNumber, NSDate;

@interface DeviceContext : INObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *routeId;
@property (nonatomic) long long proximity;
@property (nonatomic) long long nowPlayingState;
@property (nonatomic, copy) NSDate *nowPlayingTimestamp;
@property (nonatomic) long long nowPlayingMediaType;
@property (nonatomic, copy) NSString *groupId;
@property (nonatomic, retain) NSNumber *silentPrimary;

- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
