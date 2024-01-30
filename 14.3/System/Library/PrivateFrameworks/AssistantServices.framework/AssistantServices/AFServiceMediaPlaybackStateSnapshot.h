@class NSString, NSDate;

@interface AFServiceMediaPlaybackStateSnapshot : AFServiceContextSnapshot

@property (readonly, nonatomic) long long playbackState;
@property (readonly, copy, nonatomic) NSDate *nowPlayingTimestamp;
@property (readonly, copy, nonatomic) NSString *mediaType;
@property (readonly, copy, nonatomic) NSString *groupIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithDeliveryDate:(id)a0 playbackState:(long long)a1 nowPlayingTimestamp:(id)a2 mediaType:(id)a3 groupIdentifier:(id)a4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
