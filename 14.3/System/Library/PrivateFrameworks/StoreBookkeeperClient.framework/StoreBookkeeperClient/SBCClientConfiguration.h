@class SBCPlaybackPositionDomain;

@interface SBCClientConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SBCPlaybackPositionDomain *playbackPositionDomain;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPlaybackPositionDomain:(id)a0;

@end
